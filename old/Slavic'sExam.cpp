#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
        string first, second, final;
        cin >> first;
        cin >> second;
        bool state  = false;
        int j = 0;
        for (size_t i = 0; i < first.size(); i++)
        {

            if (j >= second.size())
            {
                if (first[i] == '?')
                {
                    first[i] = 'a';
                    state = true;
                }
                continue;
            }
            if (first[i] == second[j])
            {
                j++;
                state = true;
            }
            else if (first[i] == '?')
            {
                first[i] = second[j];
                j++;
                state = true;
            }
            
                }
        if(state){
            cout << "YES" << endl << first << endl;
        }else cout << "NO" << endl;
    }
    return 0;
}
