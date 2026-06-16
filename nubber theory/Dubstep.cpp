#include <iostream>


using namespace std;

int main()
{
int space=0;
    string s;
    cin >> s;
string  result = "";
    for (int i = 0; i < s.size();)
    {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB")
        {

if(space == 0 && i !=0){
 result += " ";
}
i += 3;
            space++;
        }else
        {
            result += s[i];
            i++;
            space=0;
        }
    }
    cout << result;

}