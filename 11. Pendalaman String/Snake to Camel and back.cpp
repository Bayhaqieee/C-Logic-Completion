#include<bits/stdc++.h>
using namespace std;
int main(){
	string x;
	cin >> x;
	for (int i = 0; i < x.length();i++){
		if (x[i] == 95){
			continue;
		}
		else if (x[i - 1] == 95){
			x[i] -= 32;
			cout << x[i];
		}
		else if ('A' <= x[i] && x[i] <= 'Z'){
			cout << "_";
			x[i] += 32;
			cout << x[i];
		} 
		else{
			cout << x[i];
		}
	}
	
}
