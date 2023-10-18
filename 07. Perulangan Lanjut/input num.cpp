#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int x,c;
	c = 0;
	cin >> x;
	for (int i = 1; i <= x; i++){
		for (int j = 0; j <= x; j++){
			if (j < i){
				cout << c;
				c++;
				if (c > 9) {
					c = 0;
				}
			}
			
		}
		cout << "\n";
	}
}
