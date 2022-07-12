#include <bits/stdc++.h>
using namespace std;
int main() {
	string str, subj="ideafuse";
	cin >> str;
	size_t temp = str.find(subj);
	if(temp!=string::npos) cout << temp+1 << "\n";
	else cout << -1 << "\n";
}
