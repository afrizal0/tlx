#include <iostream>
using namespace std;
int catat[9] = {0};
void F(int N, int K, int kedalaman) {
	if(kedalaman>=K) {
		for(int j=0; j<K; j++) {
			cout << catat[j];
			if(j<K-1) cout << " ";
		}
		cout << "\n";	
	}
	else {
		for(int i=catat[kedalaman-1]+1; i<=N; i++) {
			catat[kedalaman] = i;
			F(N, K, kedalaman+1);
		}
	}
	
}
int main() {
	int n, k;
	cin >> n >> k;
	F(n, k, 0);
}
