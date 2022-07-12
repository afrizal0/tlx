#include <bits/stdc++.h>
using namespace std;

bool solve(string s, string a){
	string str=s;
	for(int i=0; i<s.length(); i++){
		string st=s.erase(i, 1);
		if(st == a) return true;
		s=str;
	}
	return false;
}

int main(){
	string str, A;
	cin >> str >> A;
	if(solve(str, A)) cout << "Tentu saja bisa!\n";
	else cout << "Wah, tidak bisa :(\n";
}
	
