#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
	double x,y,a,b,r;
	
	cin >> a >> b >> x >> y;
	
	r = abs(x - a) + abs(y - b);
	
	cout << r;
	return 0;
	
}
