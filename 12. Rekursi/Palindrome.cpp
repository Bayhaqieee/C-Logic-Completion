#include<bits/stdc++.h>
using namespace std;

char a[111];
int x;
bool p(int i){
	if (i == x/2){
		return true;
	}
	if(a[i] == a[x-i-1]){
		return p(i+1);
	}
	else{
		return false;
	}
}

int main(){
	cin >> a;
	x = strlen(a);
	if(p(0)){
		cout << "YA";
	}
	else{
		cout << "BUKAN";
	}
}
