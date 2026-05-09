#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    int n, k, c = 0;

    bool cool = true;

    cin >> n >> k;
    if(k==0){cout << 1;return 0;}
    string s, real = "1234567890";
    int size;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        size = s.size();
        cool = true;
       
        if (s[size - 1] != '0'){
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
  
   
        cout << c;


    return 0;
}
