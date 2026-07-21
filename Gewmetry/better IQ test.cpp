#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
string l1,l2,l3,l4;

cin >>l1;
cin >>l2;
cin >>l3;
cin >>l4;


for (int i = 0; i < 4; i++)
{
if(l1[i]==l1[i+1]){
    if(l2[i]==l1[i]||l2[i+1]==l1[i]){
   cout << "YES";
            return 0;
    }
}
}

for (int i = 0; i < 4; i++)
{
if(l2[i]==l2[i+1]){
    if(l3[i]==l2[i]||l3[i+1]==l2[i]){
   cout << "YES";
            return 0;
    }else if(l1[i]==l2[i]||l1[i+1]==l2[i]){
           cout << "YES";
            return 0;
    }
}
}

for (int i = 0; i < 4; i++)
{
if(l3[i]==l3[i+1]){
    if(l4[i]==l3[i]||l4[i+1]==l3[i]){
   cout << "YES";
            return 0;
    }else if(l2[i]==l3[i]||l2[i+1]==l3[i]){
           cout << "YES";
            return 0;
    }
}
}
for (int i = 0; i < 4; i++)
{
if(l4[i]==l4[i+1]){
    if(l3[i]==l4[i]||l3[i+1]==l4[i]){
   cout << "YES";
            return 0;
    }
}
}

cout << "NO";

return 0;
}
