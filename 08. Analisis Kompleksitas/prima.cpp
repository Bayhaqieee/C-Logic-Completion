#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
	
	int x,d;
	
	cin >> x;
	for (int i = 0; i < x; i++){
		int y;
		cin >> y;
		
		bool p = true;
		if (y == 1 || y <= 0){
			p = false;
		}
		
		d = 2;
		while (d <= trunc(sqrt(y))){
			if (y % d == 0){
				p = false;
			}
			d++;
		}
		if (p){
			cout << "YA\n";
		}
		else{
			cout << "BUKAN\n";
		}
	}
}
