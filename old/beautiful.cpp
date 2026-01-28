#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> a;
    int x;
    int first = 0, 
    last = 0;
    
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int b;
        cin >> b;
        if (a.empty())
        {
            first = b;
            last = b;
            cout << 1;
        
        }
        if (b <= last)
        {
            a.push_back(b);
            cout << 1 << endl;
        
        }
        else if (b >= first)
        {
            a.push_back(b);
            cout << 0 << endl;
        }
        else
        {a.push_back(b);
            cout << 1 << endl;
        }
        last = b;
    }
    return 0;
}