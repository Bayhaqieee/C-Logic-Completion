#include<bits/stdc++.h>

using namespace std;

int x;

int main (){
	cin >> x;
	for (int i = 0; i <= x; i++){
		if (i % 10 == 0){
			continue;
		}
		else if (i == 42){
			cout << "ERROR";
			break;
		}
		else;{
			cout << i << endl;
		}
	}
}
