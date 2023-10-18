#include<bits/stdc++.h>
using namespace std;

int a[10000][10000], b[10000][10000], c[10000][10000];

int pangkat(int m,int n){
	
	int jaw = 1;
	if (n == 0){
		return 1;
	}
	else if (n == 1){
		return m;
	}
	else{
		int ans = pangkat(m,n/2);
		ans = ans*ans;
		jaw = ans;
		if(n % 2 == 1){
			jaw = jaw * m;
		}
		return jaw;
	}
}

int main(){
	int nil1,nil2;
	
	cin >> nil1 >> nil2;
	
	for (int i = 1; i <= nil1; i++){
		cin >> a[i][1] >> b[i][2];
	}
	
	int mx = -10000000;
	int mn = 10000000;
	for(int i = 1; i<= nil1;i++){
		for(int j = 1; j<=nil1;j++){
			if(j!=i){
				int x = abs(a[i][1] - a[j][1]), y = abs(b[i][2] - b[j][2]);
				c[i][j] = pangkat(x,nil2) + pangkat(y,nil2);
				
				mx = max(mx,c[i][j]);
				mn = min(mn,c[i][j]);
			}
		}
	}
	cout << mn << " "<< mx;
}
