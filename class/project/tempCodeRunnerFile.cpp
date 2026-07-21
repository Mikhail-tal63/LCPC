#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Session
{
    string day;
    int startTime,endTime;
};
struct Course{
    string name;
    vector<Session> sessions;
};

string ToLower(string s){
    for (int i = 0; i < (int)s.length(); i++)
    {
        if(s[i] >= 'A' && s[i]<= 'Z'){
            s[i] = s[i] -'A' +'a';
        }
    }
    return s;
}

bool sessionOverlap(Session a, Session b){
    if(a.day != b.day)return false;

    return(a.startTime < b.endTime && b.startTime < a.endTime);
}

bool courseConflict(Course& a, Course b){
    for (int i = 0; i < (int)a.sessions.size(); i++)
    {
        for (int j = 0; j < (int)b.sessions.size(); j++)
        {
            if(sessionOverlap(a.sessions[i],b.sessions[j]))
            return true;
        }
        
    }
    return false;
}

int countCourseConflict(vector<Course>& courses,int idx){
    int count =0;
    for (int i = 0; i < (int)courses.size(); i++)
    {
    if(idx != i && courseConflict(courses[idx],courses[i]))
    count++;
    }
    return count;
}

bool hasAnyConflict(vector<Course>& courses){
    for (int i = 0; i < (int)courses.size(); i++)
    {
        for (int j = i + 1; j < (int)courses.size(); j++)
        {
            if(courseConflict(courses[i],courses[j]))
            return true;
        }
        
    }
    return false;
}

int main(){

    const int DB_SIZE = 10 ;
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


for (int i = 0; i < DB_SIZE; i++)
{
    cout << db[i].name<< " : ";
    for (int j = 0; j < db[i].sessions.size(); j++)
    {
        cout << db[i].sessions[j].day;
        cout << db[i].sessions[j].startTime;
        cout << db[i].sessions[j].endTime;
    }
    
}

int k;
cin >> k;
 
int chosenNum;
cin >> chosenNum;

vector<Course> chosenCourses;

for (int i = 0; i < chosenNum; i++)
{
    string chosenName;
    cin >> chosenName;
bool found = false;
    for (int j = 0; j < DB_SIZE; j++)
    {
        if(ToLower(chosenName) == ToLower(db[i].name)){

             bool doublecate = false;
             for (int m = 0; m < chosenCourses.size(); m++)
             {
                if(ToLower(chosenName) == ToLower(chosenCourses[m].name)){
                    doublecate = true;
                    break;
                }
             }
             
        if (!doublecate) chosenCourses.push_back(db[i]);
        found = true;
        break;
    }
     if (!found) {
            cout << "Warning: Course \"" << chosenName << "\" not found and will be ignored.\n";
        }
    }
}

while(hasAnyConflict(chosenCourses)){
    int maxConflict = 0 , worstIDX = 0;
    for (int i = 0; i < (int)chosenCourses.size(); i++)
    {
        int c = countCourseConflict(chosenCourses,i);
    if(c > maxConflict){
        maxConflict = c;
        worstIDX = i; 
    }
    }
    
    chosenCourses.erase(chosenCourses.begin() + worstIDX);

}


    return 0;
}