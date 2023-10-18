#include<bits/stdc++.h>
using namespace std;

char a[1000];
int x;
	
int main(){
	cin >> a;
	cin >> x;
	
	int change = strlen(a);
	for (int i = 0; i < change; i++){
		int huruf = (a[i] - 'a');
		int sandi = (huruf + x) % 26;
		a[i] = sandi + 'a';
	}
	cout << a;
}
