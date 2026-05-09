#include <iostream>
#include <algorithm>


using namespace std;

int main()
{

string s,result ,final;
cin>>s;
transform(s.begin(), s.end(), s.begin(), ::tolower);
for(int i=0;i<s.length();i++){
char c=s[i];

if (c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u'||c=='Y'||c=='y'){
continue;
}else{
result+=c;
}

}
for(char c : result){
final+=".";
final+=c;
}
cout<<final;

return 0;

}