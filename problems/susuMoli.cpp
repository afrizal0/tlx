#include <bits/stdc++.h>
using namespace std;
int f(int N, int A, int B, int K) {
	if(K==1) return N-A+B;
	else {
		return f(N-A+B, A, B, K-1); 
	}
}	
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n, a, b, k;
	cin >> T;
	for(int j=1; j<=T; j++){
		cin >> n >> a >> b >> k;
		cout << "Kasus #" << j << ": " << f(n, a, b, k) << "\n";
	}
}
