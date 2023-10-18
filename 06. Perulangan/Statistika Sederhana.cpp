#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
	
	long int x,y,max,min;
	
	cin >> x;
	
	for (int i = 0; i < x; i++){
		cin >> y;
		
		if (i==0){
			max = y;
			min = y;
		}
		else if (max < y){
			max = y;
		}
		else if (min > y){
			min = y;
		}
	}
	
	cout << max << " " << min;
}
