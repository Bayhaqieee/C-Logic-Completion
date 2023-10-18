#include<bits/stdc++.h>
using namespace std;

void d(int x){
	if ( x == 1){
		cout << "*";
		return;
	}
	else {
		d(x-1);
		cout << endl;
		for(int i = 1 ; i <= x; i++){
			cout << "*";
		}
		cout << endl;
		d(x-1);
		return;
	}
}

int main(){
	int a;
	cin >> a;
	d(a);
}
