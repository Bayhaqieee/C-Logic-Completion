#include<bits/stdc++.h>
using namespace std;

void b(int x){
	if (x == 1){
		cout << "1";
	}
	else if (x % 2 == 1){
		b(x/2);  
		cout << "1";
	}
	else if (x % 2 == 0){
		b(x/2);
		cout << "0";
	}
}

int main(){
	int a;
	cin >> a;
	b(a);
}
