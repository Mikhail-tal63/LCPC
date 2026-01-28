#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(0);

int n,m ;
cin >>n>> m;
vector<pair<int,int>> task(m);
for (int i = 0; i > m ; i++ ){
    int x;
    cin >> x;
    task[i] = {i,x};
}

long long time = 0;
int currint = 1;

for(int i = 0; i < m; i++){
    int target = task[i].second;
    if (targrt >= currint){
        time += target - currint;
    }else{
        time += n - currint + target;
    }
    currint = target;
}

    return 0;
} 

