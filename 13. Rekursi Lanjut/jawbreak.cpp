#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];
int x,y;
int m,n,t = 0,nilai = 0;

int gerak(int n, int m,int x, int y){
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= m;j++){
			if (a[x][y] == a[x][y-1]){
				t++;
				return a[x][y-1]; 
			}
			if(a[x][y] == a[x][y+1]){
				t++;
				return a[x][y+1];
			}
			if(a[x][y] == a[x-1][y]){
				t++;
				return a[x-1][y];
			}
			if(a[x][y] == a[x+1][y]){
				t++;
				return a[x+1][y];
			}
			else{
				continue;
			}
		}
	}
	nilai = t*(t-1);
}


int main(){
	cin >> n;
	cin >> m;
	
	for (int i  = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	cin >> x >> y;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			gerak(n,m,x,y);
			cout << nilai;
		}
	}
	
}
