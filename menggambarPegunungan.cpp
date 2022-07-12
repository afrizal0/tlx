#include <bits/stdc++.h>
using namespace std;
void F(int n) {
	if(n>0) {
		F(n-1);
		for(int i=1; i<=n; i++) {
			cout << '*';
		}
		cout << "\n";
		F(n-1);
	}
}
int main() {
	int N;
	cin >> N;
	F(N);
}

	
