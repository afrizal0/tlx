#include <bits/stdc++.h>
using namespace std;
int F(int a, int b, int m) {
	if(b==0) {
		return 1;
	}
	else {
		
		return F(a, b-1, m)*a;
	}
}

int main() {
	int A, B, M;
	cin >> A >> B >> M;
	int hasil = F(A, B, M);
	cout << hasil;
}
