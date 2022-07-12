#include <bits/stdc++.h>
using namespace std;
int main(){
	string str, q="halo dunia";
	getline(cin, str);
	int j=0;
	for(int i=0; i<str.length(); i++){
		char s = tolower(str[i]);
		if(s == q[i]){
			j++;
		}
	}
	
	cout << j << "\n";
}
