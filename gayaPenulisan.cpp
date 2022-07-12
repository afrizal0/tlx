#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '_') {
			s[i+1] -= 'a' - 'A';
			s.erase(i, 1);
		}
		else if(isupper(s[i])) { 
			s[i] -= 'A' - 'a';
			s.insert(i, "_");
		}
	}
	cout << s << "\n";
}
