#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
	
	long int x,d;
	
	cin >> x;
	for (int i = 0; i < x; i++){
		long int y,t;
		cin >> y;
		t=1;
		
		bool p = true;
		if ( y == 1 ){
			t++;
		}
		if ( y <= 0 ){
			p = false;
		}
		
		d = 2;
		while (d <= trunc(sqrt(y))){
			if (y % d == 0){
			t++;
			
			if (t > 3){
				p = false;
			}
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
