#include<bits/stdc++.h>
using namespace std;

int a, add[20];
bool c[20],pass;

void zigzag(char x){
	
	if( x == a){
		if (a >= 3){
			for(int i = 1; i < a-1;i++){
				if (add[i] > add[i-1] && add[i] > add[i+1]){
					pass = true;  //zigzag rules #1
				}
				else if (add[i] < add[i-1] && add[i] < add[i+1]){
					pass = true; //zigzag rules #2
				}
				else{
					pass = false;  //out of rules
					break; 
				}
			}
		}
		else{
			pass = true; //if num less than 3
		}
		if(pass){
			for(int i = 0; i < a;i++){
				cout << add[i]; //to output result
			}
			cout << endl;
		}
	}
	else{
		for (int i = 1; i <= a; i++){ //for looping
			if(!c[i]){
				c[i] = true;
				add[x] = i;
				zigzag(x+1);
				c[i] = false;
			}
		}
	}
	
}

int main(){
	cin >> a;
	zigzag(0);
}
