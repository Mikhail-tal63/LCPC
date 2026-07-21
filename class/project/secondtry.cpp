#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Course {
    string name;
    int start; // بالدقائق من منتصف الليل
    int end;
};

// تحويل "HH:MM" إلى دقائق
int toMinutes(const string& t) {
    int h = stoi(t.substr(0, 2));
    int m = stoi(t.substr(3, 2));
    return h * 60 + m;
}

// تحويل دقائق إلى "HH:MM"
string toTime(int mins) {
    char buf[6];
    sprintf(buf, "%02d:%02d", mins / 60, mins % 60);
    return buf;
}

vector<Course> result;
bool found = false;

// courses مرتّبة حسب وقت النهاية
void backtrack(const vector<Course>& courses, int idx,
               vector<Course>& chosen, int need, int lastEnd) {
    if (found) return;

    if ((int)chosen.size() == need) {
        result = chosen;
        found = true;
        return;
    }

    int remaining = courses.size() - idx;
    int stillNeed  = need - (int)chosen.size();

    // pruning: ما في كفاية مواد باقية
    if (remaining < stillNeed) return;

    for (int i = idx; i < (int)courses.size(); i++) {
        if (courses[i].start >= lastEnd) {          // ما في تعارض
            chosen.push_back(courses[i]);
            backtrack(courses, i + 1, chosen, need, courses[i].end);
            if (found) return;
            chosen.pop_back();
        }
    }
}

int main() {
    int n;
    cout << "count of classes ";
    cin >> n;
    cin.ignore();

    vector<Course> courses(n);
    for (int i = 0; i < n; i++) {
        string startStr, endStr;
        cout << "\nاسم المادة " << i + 1 << ": ";
        getline(cin, courses[i].name);
        cout << "وقت البداية (HH:MM): ";
        cin >> startStr;
        cout << "وقت النهاية (HH:MM): ";
        cin >> endStr;
        cin.ignore();
        courses[i].start = toMinutes(startStr);
        courses[i].end   = toMinutes(endStr);
    }

    // ترتيب حسب وقت النهاية (Greedy basis)
    sort(courses.begin(), courses.end(),
         [](const Course& a, const Course& b) {
             return a.end < b.end;
         });

    int need;
    cout << "\nكم مادة تريد (5، 6، أو 7): ";
    cin >> need;

    vector<Course> chosen;
    backtrack(courses, 0, chosen, need, 0);

    if (found) {
        cout << "\n✓ الجدول المقترح (" << need << " مواد بدون تعارض):\n";
        cout << string(40, '-') << "\n";
        for (auto& c : result) {
            cout << "  " << c.name
                 << "  [" << toTime(c.start)
                 << " - " << toTime(c.end) << "]\n";
        }
    } else {
        cout << "\n✗ لا يوجد تركيبة من " << need
             << " مواد بدون تعارضات.\n";
        cout << "جرّب عدداً أقل.\n";
    }

    return 0;
}