#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    
string s,re;
cin >> s;
    getline(cin, s);  
    
  
    string result = "";
    for(char c : s) {
        if(c != '{' && c != '}' && c != ',' && c != ' ') {
            result += c;
        }
    }


set<char> st;
for (int i = 0; i < result.size(); i++)
{
   
    st.insert(result[i]);
}
cout << st.size();




    return 0;
}