#include<bits/stdc++.h>
using namespace std;

int f(int x){
	if(x==1){
		return 1;
	}
	else if(x % 2 == 0){
		return (x/2) * f(x-1);
	}
	else if(x % 2 > 0){
		return x * f(x-1);
	}
}

int main(){
	int a;
	cin >> a;
	cout << f(a); 
}
