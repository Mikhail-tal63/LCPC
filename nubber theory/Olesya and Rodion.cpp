#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
int n , x,y;

cin >> n;
bool is_rated = false;
vector<int> vec;

for (int i = 0; i < n; i++)
{
    cin >> x >> y;
    if(x != y){
        is_rated =true;
      
    }
    vec.push_back(x);
}
if(is_rated){
    cout << "rated";
}else{
    if(!is_sorted(vec.begin(), vec.end(), greater<int>())){
        cout << "unrated";
    }else{
        cout << "maybe";
    }
}
    return 0;

}