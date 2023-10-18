#include<bits/stdc++.h>
using namespace std;

int rev(int x){
	int temp = x;
	int ret = 0;
	
	while (temp > 0){
		ret = (ret*10) + (temp % 10);
		temp = temp / 10;
	}
	return ret;
}

int main(){
	int a, b;
	cin >> a >> b;
	
	int c = rev(a) + rev(b);
	
	cout << rev(c);
}
