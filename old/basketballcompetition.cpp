#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
int n,d , p;
cin >> n >> d;
vector<int> v;
for (size_t i = 0; i < n; i++)
{
cin >> p;
v.push_back(p);
}
sort(v.begin(),v.end(),greater<int>());
int win2=0,
team = 0;

    while (!v.empty()) {
        team = v.front(); 
        v.erase(v.begin());

        while (team <= d && !v.empty()) { 
            
            team += team;
            v.pop_back();
        }

        if (team > d) {
            win2++;
        }
    }

    cout << win2 << endl;
    return 0;
}