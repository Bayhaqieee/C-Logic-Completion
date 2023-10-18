#include<bits/stdc++.h>
using namespace std;

//erase 
//find the word
//add the word
int main(){
	
string a,b,c,d;
	
cin >> a ;
cin >> b ;
cin >> c ;
cin >> d ;
	
	int era1 = a.find(b);
	int era2 = b.length();
	a = a.erase(era1,era2);
		int tambah1 = a.find(c);
		int tambah2 = c.length();

		a = a.insert(tambah1+tambah2,d);
		cout << a;
}
