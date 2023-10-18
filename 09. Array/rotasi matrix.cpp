
#include<bits/stdc++.h>
using namespace std;

int x,y;

int m[105][105];

int main(){
	cin >> x >> y;
	for(int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			cin >> m[i][j];
		}
	}
	
	for (int i = 0; i < y; i++){
		for (int j = x-1; j >= 0; j--){
			if (j != 0){
				cout << m[j][i] << " ";
			}
			else{
				cout << m[j][i] << endl;
			}
		}
	}
}
