#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	
	cin >> a >> b;
	
	int word1 = a.find(b);
	int word2 = b.length();
	while(word1 != -1){
		a.erase(word1,word2);
		word1=a.find(b);
	}
	cout << a;
}
