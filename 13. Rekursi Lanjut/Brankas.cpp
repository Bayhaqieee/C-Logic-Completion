#include<bits/stdc++.h>
using namespace std;

int b,c;
int a[1001];

void checker(int x){
	if (x >= c){
		for (int i = 0; i < c;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else{
		for (int i = 0; i < b; i++){
			a[x] = i+1;
			if (x > 0){
				if (a[x - 1] >= a[x])
				continue;
			}
			checker(x+1);
		}
	}
}

int main(){
	cin >> b >> c;
	checker(0);
}

