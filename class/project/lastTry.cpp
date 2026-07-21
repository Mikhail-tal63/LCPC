#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Each course has multiple sessions (lectures) spread across the week
struct Session {
    string day;
    int start_time;
    int end_time;
};

struct Course {
    string name;
    vector<Session> sessions; // All weekly sessions for this course
};

// Map day name to integer for chronological comparison
int getDayValue(string day) {
    if (day == "Saturday")  return 1;
    if (day == "Sunday")    return 2;
    if (day == "Monday")    return 3;
    if (day == "Tuesday")   return 4;
    if (day == "Wednesday") return 5;
    if (day == "Thursday")  return 6;
    return 0;
}

// Convert string to lowercase for case-insensitive comparison
string toLower(string s) {
    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
    return s;
}

// Check if two sessions overlap in time (same day, overlapping hours)
bool sessionsOverlap(Session a, Session b) {
    if (a.day != b.day) return false;
    // Overlap if one starts before the other ends
    return (a.start_time < b.end_time && b.start_time < a.end_time);
}

// Check if two courses have ANY conflicting sessions between them
bool coursesConflict(Course& a, Course& b) {
    for (int i = 0; i < (int)a.sessions.size(); i++) {
        for (int j = 0; j < (int)b.sessions.size(); j++) {
            if (sessionsOverlap(a.sessions[i], b.sessions[j]))
                return true;
        }
    }
    return false;
}

// Count how many courses in the list conflict with course at index idx
int countConflicts(vector<Course>& courses, int idx) {
    int count = 0;
    for (int i = 0; i < (int)courses.size(); i++) {
        if (i != idx && coursesConflict(courses[idx], courses[i]))
            count++;
    }
    return count;
}

// Check if the current list has any conflicts at all
bool hasAnyConflict(vector<Course>& courses) {
    for (int i = 0; i < (int)courses.size(); i++) {
        for (int j = i + 1; j < (int)courses.size(); j++) {
            if (coursesConflict(courses[i], courses[j]))
                return true;
        }
    }
    return false;
}

int main() {
    // ----------------------------------------------------------
    // Database: Each course has multiple sessions per week
    // Schedule: Saturday to Thursday, 9:00 - 15:00, 2-hour slots
    // ----------------------------------------------------------
    const int DB_SIZE = 10;
    Course db[DB_SIZE];

    // Math: 3 sessions/week
    db[0].name = "Math";
    db[0].sessions = {{"Saturday", 9, 11}, {"Monday", 9, 11}, {"Wednesday", 9, 11}};

    // Physics: 3 sessions/week
    db[1].name = "Physics";
    db[1].sessions = {{"Saturday", 9, 11}, {"Tuesday", 11, 13}, {"Thursday", 9, 11}};
    // Conflict: Math-Saturday 9-11 vs Physics-Saturday 9-11

    // Programming: 2 sessions/week
    db[2].name = "Programming";
    db[2].sessions = {{"Sunday", 11, 13}, {"Wednesday", 11, 13}};

    // English: 2 sessions/week
    db[3].name = "English";
    db[3].sessions = {{"Monday", 9, 11}, {"Thursday", 13, 15}};
    // Conflict: Math-Monday 9-11 vs English-Monday 9-11

    // Logic: 2 sessions/week
    db[4].name = "Logic";
    db[4].sessions = {{"Sunday", 9, 11}, {"Tuesday", 9, 11}};

    // Database: 2 sessions/week
    db[5].name = "Database";
    db[5].sessions = {{"Sunday", 11, 13}, {"Thursday", 11, 13}};
    // Conflict: Programming-Sunday 11-13 vs Database-Sunday 11-13

    // AI: 3 sessions/week
    db[6].name = "AI";
    db[6].sessions = {{"Monday", 11, 13}, {"Wednesday", 9, 11}, {"Friday", 9, 11}};
    // Conflict: Math-Wednesday 9-11 vs AI-Wednesday 9-11

    // Network: 2 sessions/week
    db[7].name = "Network";
    db[7].sessions = {{"Tuesday", 9, 11}, {"Thursday", 9, 11}};
    // Conflict: Logic-Tuesday 9-11 vs Network-Tuesday 9-11
    // Conflict: Physics-Thursday 9-11 vs Network-Thursday 9-11

    // OS: 2 sessions/week
    db[8].name = "OS";
    db[8].sessions = {{"Saturday", 11, 13}, {"Wednesday", 13, 15}};

    // Security: 2 sessions/week
    db[9].name = "Security";
    db[9].sessions = {{"Sunday", 9, 11}, {"Monday", 13, 15}};
    // Conflict: Logic-Sunday 9-11 vs Security-Sunday 9-11


    cout << "=========================================================\n";
    cout << "              AVAILABLE COURSES IN THE DATABASE          \n";
    cout << "=========================================================\n";
    for (int i = 0; i < DB_SIZE; i++) {
        cout << i + 1 << ". " << db[i].name << "\n";
        cout << "   Sessions:\n";
        for (int j = 0; j < (int)db[i].sessions.size(); j++) {
            cout << "     - " << db[i].sessions[j].day
                 << " " << db[i].sessions[j].start_time << ":00 - "
                 << db[i].sessions[j].end_time << ":00\n";
        }
    }
    cout << "=========================================================\n\n";






    int k;
    cout << "Enter the number of courses you want to register (e.g., 3, 4, 5): ";
    cin >> k;

    int numChosen;
    cout << "How many courses do you want to select from the list? ";
    cin >> numChosen;

    vector<Course> chosenCourses;
    cout << "\nEnter the course names you selected (e.g., Math Physics Database):\n";
    for (int i = 0; i < numChosen; i++) {
        string courseName;
        cin >> courseName;

        bool found = false;
        for (int j = 0; j < DB_SIZE; j++) {
            if (toLower(db[j].name) == toLower(courseName)) {
                // Make sure same course is not added twice
                bool duplicate = false;
                for (int m = 0; m < (int)chosenCourses.size(); m++) {
                    if (toLower(chosenCourses[m].name) == toLower(courseName)) {
                        duplicate = true;
                        break;
                    }
                }
                if (!duplicate) chosenCourses.push_back(db[j]);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Warning: Course \"" << courseName << "\" not found and will be ignored.\n";
        }
    }

    if (chosenCourses.empty()) {
        cout << "\nNo valid courses were selected.\n";
        return 0;
    }

    // ----------------------------------------------------------
    // Greedy Conflict-Resolution:
    // Repeatedly remove the course with the most conflicts
    // until the schedule is conflict-free
    // ----------------------------------------------------------
    cout << "\n--- Resolving Conflicts ---\n";
    while (hasAnyConflict(chosenCourses)) {
        // Find the course with the highest conflict count
        int maxConflicts = 0;
        int worstIdx = 0;
        for (int i = 0; i < (int)chosenCourses.size(); i++) {
            int c = countConflicts(chosenCourses, i);
            if (c > maxConflicts) {
                maxConflicts = c;
                worstIdx = i;
            }
        }
        cout << "Removing \"" << chosenCourses[worstIdx].name
             << "\" (" << maxConflicts << " conflict(s) with other courses)\n";

        // Remove the worst course from the list
        chosenCourses.erase(chosenCourses.begin() + worstIdx);
    }

    int finalCount = chosenCourses.size();

    // ----------------------------------------------------------
    // Output final schedule
    // ----------------------------------------------------------
    if (k <= finalCount) {
        cout << "\n Success! You can register " << k << " course(s) without any conflicts.\n";
        cout << "Recommended schedule:\n";
        cout << "---------------------------------------------------------\n";
        for (int i = 0; i < k; i++) {
            cout << i + 1 << ". " << chosenCourses[i].name << "\n";
            for (int j = 0; j < (int)chosenCourses[i].sessions.size(); j++) {
                cout << "     - " << chosenCourses[i].sessions[j].day
                     << " " << chosenCourses[i].sessions[j].start_time << ":00 - "
                     << chosenCourses[i].sessions[j].end_time << ":00\n";
            }
        }
    } else {
        cout << "\n Notice: You requested " << k << " courses, but only " << finalCount
             << " conflict-free course(s) could be found from your selection.\n";
        if (finalCount > 0) {
            cout << "The maximum conflict-free schedule from your selection:\n";
            cout << "---------------------------------------------------------\n";
            for (int i = 0; i < finalCount; i++) {
                cout << i + 1 << ". " << chosenCourses[i].name << "\n";
                for (int j = 0; j < (int)chosenCourses[i].sessions.size(); j++) {
                    cout << "     - " << chosenCourses[i].sessions[j].day
                         << " " << chosenCourses[i].sessions[j].start_time << ":00 - "
                         << chosenCourses[i].sessions[j].end_time << ":00\n";
                }
            }
        }
    }

    return 0;
}
