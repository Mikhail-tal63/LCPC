#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    int n, k, c = 0;

    bool cool = true;

    cin >> n >> k;
    
    string s, real = "1234567890";
    int size = s.size();
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if(s.size() != k+1)
        cool = true;
        cout<< s[size-1];
        if (s[size - 1] != 0){
            cool = false;
        }
         
        for (int j = 0; j < s.size() - 1; j++)
        {
            if (s[j] != real[j])
                cool = false;
        }

        if (cool)
        {
            c++;
        }
    }
    if (c ==0)
    {
        cout << -1;
    }else
    {
        cout << c;
    }

    return 0;
}
