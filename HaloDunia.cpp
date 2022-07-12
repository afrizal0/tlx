#include <bits/stdc++.h>
using namespace std;
int main(){
	string str="halo dunia", strInp;
	int counter = 0;
	getline(cin, strInp);
	for(int i=0; i<10; i++) {
		tolower(strInp[i]);
		if(strInp[i] == str[i]) counter+=1;
	}
	cout << counter << "\n";	
}
