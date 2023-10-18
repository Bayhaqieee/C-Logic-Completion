#include<bits/stdc++.h>
using namespace std;

int x,y;
int arr[2][1001];

void tukar(int &a, int &b){
	int change = a;
	a = b;
	b = change;
}

int main(){
	cin >> x;
	for (int i = 0; i < 2;i++){
		for(int j = 0; j < x; j++){
			cin >> arr[i][j];
		}
	}
	cin >> y;
	for (int i = 0; i < y; i++){
		char l1[10], l2[10];
		int c1, c2;
		cin >> l1 >> c1 >> l2 >> c2;
		
		int p = l1[0] - 'A';
		int q = l2[0] - 'A';
		c1--;
		c2--;
		tukar(arr[p][c1], arr[q][c2]);
	}
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < x; j++){
			cout << arr[i][j];
			if (j+1 < x){
				cout << " ";
			}
			else {
				cout << "\n";
			}
		}
	}
	return 0;
}
