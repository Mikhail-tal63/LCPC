#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){

    long long n , k;
    cin >> n ;

    
    set<int> set;
    for (int i =0 ; i<n;i++){
        cin >> k;
    set.insert(k);

    }
    
    for (int i =0 ; i<n;i++){
        cin >> k;
    set.insert(k);
    }

    if(set.size() == 1 && *set.begin() == 0){
        cout << "Oh, my keyboard!";
    
    }else if(set.size() >= n){
    cout << "I become the guy.";
}else{
    cout << "Oh, my keyboard!";
}


    return 0;
}