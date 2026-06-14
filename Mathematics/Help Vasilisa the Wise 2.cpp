#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int r1,r2,c1,c2,d1,d2;
    int L1,L2,R1,R2;

    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;

    bool noMach = true;
    for (int d = 1; d <= 9; d++)
    {
        L1 = d;
      for (int c = 1; c <= 9; c++)
    {

        L2 = c;
      for (int b = 1; b <= 9; b++)
    {

        R1 = b;
      for (int a = 1; a <= 9; a++)
    {
    

R2 =  a;

    if (a == b || a == c || a == d ||
                        b == c || b == d ||
                        c == d)
                        continue;

  if (a + b == r1 &&
                        c + d == r2 &&
                        a + c == c1 &&
                        b + d == c2 &&
                        a + d == d1 &&
                        b + c == d2) {

                        cout << a << " " << b << "\n";
                        cout << c << " " << d << "\n";
    noMach = false;
    return 0;
}


    }
    
    }
    
    }
    
    }
    
if (noMach);
cout << -1;


    return 0;
}