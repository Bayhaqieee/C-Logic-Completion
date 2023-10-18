#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int x;
	
	cin >> x ;
	int a[10000] = {0};
	
	int b, min = 0, max;
	
	for(int i = 0; i < x; i++){
		cin >> b;
		a[b]++;
	}

	for (int j = 0; j < 10000; j++){
		if (min <= a[j]){
			min = a[j];
			max = j;
		}
	}
	
	cout << max;
	
	return 0;
	
}
