#include<bits/stdc++.h>
using namespace std;


void fungsi(int a, int b, int k, int x){
	for(int i = 0; i < k;i++){
		x = abs(a*x+b);
	}
	cout << x << endl;
}
int main(){
	int a,b,k,x;
	cin >> a >> b >> k >> x;
	fungsi(a,b,k,x);
}
