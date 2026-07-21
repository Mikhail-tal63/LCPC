#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
string val;

vector<string> nigga;

for (int i = 0; i < 4; i++)
{
    cin >> val;
    nigga.push_back(val);
}
for (int i = 0; i < 4; i++)
{
string s = nigga[i];
for (int j = 0; j < 4; j++)
{

    if(s[j] == s[j+1]){
        string check = nigga[i+1];
        string checktop = nigga[i-1];
        if(check[j]==s[j] || check[j+1]== s[j]){
            cout << "YES";
            return 0;
        }else if(checktop[j]==s[j] || checktop[j+1]== s[j]){
            cout << "YES";
            return 0;
        }
    }
}

}

cout << "NO";

return 0;
}
