#include <bits/stdc++.h>
using namespace std;

long long x, a[10001],angka;

int main(){
	cin >> x;
	for (int i = 2; i <= x;i++){
		angka = 0;
		while (x%i == 0){
			angka++;
			x /= i;
		}
		if (angka > 0){
			cout << i;
			if (angka > 1){
				cout << "^" << angka;
			}
			if (x != 1){
				cout << " x ";
			}
		}
	}
}
