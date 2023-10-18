#include<bits/stdc++.h>
using namespace std;

int x,y,z;

int a[105][105], b[105][105], c[105][105];

int main(){
	cin >> x >> y >> z;
	for(int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < y; i++){
		for (int j = 0; j < z; j++){
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < x; i++){
		for (int j = 0; j < z; j++){
			c[i][j] = 0;
			for (int k = 0; k < y; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
			cout << c[i][j];
			if (j < z-1){
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
