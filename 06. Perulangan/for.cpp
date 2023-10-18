#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int x,y,z;
	y=0;
	cin >> x;
	
	for(int i=0; i<x; i++){
		cin >> z;
		y += z;
	}
	cout << y;
}
