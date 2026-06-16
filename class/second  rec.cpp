#include <iostream>
using namespace std;


int sum(int n){
    if(n==1){
return 1;
    }
    return n + sum(n-1);
}

int fac(int n){
    if(n==1){
return 1;
    }
    return n * fac(n-1);
}
int fap(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
return 1;
    }
    return fap(n-1)+fap(n-2);
}


int main() {
    int n;

    cout << "ادخل عدد العناصر: ";
    cin >> n;
cout << sum(n)<<endl;
cout <<fac(n)<<endl;
cout <<fap(n);

    return 0;
}