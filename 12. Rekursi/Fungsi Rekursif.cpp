#include<bits/stdc++.h>
using namespace std;


int fungsi(int a,int b,int c, int d){
	if (c == 0){
		return d;
	}
	else{
		return abs(a*fungsi(a,b,c-1,d)+b);
	}
}

int main(){
	int w,x,y,z;
	cin >> w >> x >> y >> z;
	cout << fungsi(w,x,y,z);
}
