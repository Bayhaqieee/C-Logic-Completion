#include<bits/stdc++.h>
using namespace std;

int main(){
	 int x;
	 
	 cin >> x;
	 
	 for (int i = 0; i < x; i++){
	 	if (x == 1 || x <= 0){
	 		break;
		 }
		 int d = 2;
		while (d <= trunc(sqrt(x))){
			if (x % d == 0){
				break;
			}
			d++;
		}
		cout << i ;
	 }
}
