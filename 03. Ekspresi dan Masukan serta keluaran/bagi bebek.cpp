#include<bits/stdc++.h>
using namespace std;
int x,y,a,b;

int main(){
	cin >> x >> y;
	
	a = x / y ;
	b = x % y ;
	
	cout << "masing-masing " << a << "\n";
	cout << "bersisa " << b;
	
	return 0;
}
