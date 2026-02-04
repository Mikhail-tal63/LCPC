#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {

long long d,n=0,b,a,j=0,c=0;

cin >> n >> b >> d;

for (long long i = 0; i < n; i++)
{
    
cin >> a;
if (a > b)
{
    continue;
}

j += a;

if(j > d){
    c++;
    j = 0;

}

}
cout << c;

    return 0;
}
