#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    double a,b;
    
    cin>>a;
    
    b = a;
    a = trunc(a);
    
    if (b==a){
        cout<<a<<" "<<b;
    }
    else if (b>0){
        b = a + 1;
        cout<<a<<" "<<b;
    }
    else if (b<0){
        b = a - 1;
        cout<<b<<" "<<a;
    }
}
