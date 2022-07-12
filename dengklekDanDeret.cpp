#include <bits/stdc++.h>
using namespace std;
int main(){
	string str="";
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		string s1 = to_string(i);
		str += s1;
		if(i!=n) str += '+';
	}
	cout << str << "\n";
}
