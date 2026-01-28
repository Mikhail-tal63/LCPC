#include <vector>
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int task, sp, mins;
        cin >> task >> sp >> mins;
        int first, last;
        bool state = false;
        int gap = 0, oldLast;
        for (int i = 0; i < task; i++)
        {
            cin >> first >> last;
            gap = first - gap;
            oldLast = last;
            if (gap >= sp)
            {
                state = true;
            }
        }
        if (mins - oldLast >= sp)
        {
            state = true;
        }

        if (state)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    return 0;
}