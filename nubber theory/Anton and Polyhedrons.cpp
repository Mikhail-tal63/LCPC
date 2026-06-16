#include <iostream>
using namespace std;

int main(){
string s,n;

int z=0,t;
cin >> t;
for (int i = 0; i < t; i++)
{
  cin >> s;
for(char c : s){
n+=c;
if(n=="Tetrahedron"){
    z+=4;
    n="";
}
else if(n=="Cube"){
    z+=6;
    n="";
}else if(n=="Octahedron"){
    z+=8;
    n="";
}else if(n=="Dodecahedron"){
    z+=12;
    n="";
}else if(n=="Icosahedron"){
    z+=20;
    n="";
}

}
}

cout << z;


    return 0;
}