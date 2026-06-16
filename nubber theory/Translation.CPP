#include <iostream>
#include <algorithm>
using namespace std;

int main(){

string first,r;
cin>>first>>r;
int i=r.length();


reverse(r.begin(), r.end());


if(r == first)
cout<<"YES";
else
cout<<"NO";


    return 0;
}