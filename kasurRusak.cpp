#include <bits/stdc++.h>
using namespace std;
string palindrome(string str, int i, int length){
	if(i<length){
		if(str[i] != str[length])  {
			return "BUKAN";
		}
		return palindrome(str, i+1, length-1);
	}
	return "YA";
}
int main(){
	string str;
	cin >> str;
	int i = 0, length = str.size()-1;
	cout << palindrome(str, i, length) << "\n";
	return 0;
}
