#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;


int main(){
int v,n;
cin >> n;
string k,x,o,z;
vector<string> vec;
set<char> st;
set<char> st2;
bool cool = true;
for (int i = 0; i < n; i++)
{
  
    cin >> k;
      if(i==n/2){
        o=k;
    }
    vec.push_back(k);
   if(i==0){
    x=k[0];
   }

    for(char c : k){
        st.insert(c);
    }

    for(char d : k){
        st2.insert(d);
    }
if(st.size() > 2 || st.size() == 1){
    cool = false;
    break;
}
st.clear();
}
if(st2.size() > 2 || st2.size() == 1){
    cool = false;
    
}
if(st.size() > 2 || st.size() == 1){
    cool = false;
}
int size = vec.size();

for (int i = 0; i < n; i++)
{
    if(vec[i] == vec[size-1]){
        size--;
        if(i == n/2){
            for(int j = 0; j < o.size(); j++){
                z = o[j];
                
                if (z == x){
                    v++;
                    if(v > 1){
 cool =false;
                    break;
                    }
                   
                }
            }
        }
    }else{
cool = false;
break;
    }


}


if (cool == true){
    cout << "YES";
}else {
    cout << "NO";
}
    return 0;
}
