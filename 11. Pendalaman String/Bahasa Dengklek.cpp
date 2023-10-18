#include<bits/stdc++.h>
using namespace std;

int main(){
	string x;
	
	cin >> x;
	for (int i = 0; i < x.size();i++){
		if(x[i] > 96){
			x[i] -= 'a' - 'A';
		}
		else{
			x[i] -= 'A' - 'a';
		}
	}
	cout << x.c_str();
}
