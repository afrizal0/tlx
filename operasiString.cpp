#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	size_t temps2 = s1.find(s2);
	int s2Len = s2.length();
	s1.erase(temps2, s2Len);
	size_t temps3=s1.find(s3);
	int inserting=temps3+s3.length();
	s1.insert(inserting ,s4);
	cout << s1 << "\n";
}
