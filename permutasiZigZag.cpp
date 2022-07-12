#include <bits/stdc++.h>
using namespace std;

int catat[9];
bool pernah[9] = {false};

void tulis(int n, int kedalaman) {
	if (kedalaman >= n) {
		bool zigzag = true;
		// Cetak password
		for(int i=1; i<n-1; i++) {
			if(!( (catat[i] > catat[i-1] && catat[i] > catat[i+1]) || (catat[i] < catat[i-1] && catat[i] < catat[i+1]) )) zigzag=false;
		}
		if(zigzag) {
			for(int i=0; i<n; i++) {
				cout << catat[i];
			}
			cout << "\n";
		}
	} else {
		// Masuk ke lapisan lebih dalam
		 
		for (int i = 1; i <= n; i++) {
			if(!pernah[i]) {
				pernah[i] = true;
				catat[kedalaman] = i; // Catat di sini
				tulis(n, kedalaman + 1);
				pernah[i] = false;
			}
		}
	}
}
int main(){
	int N;
	cin >> N;
	tulis(N, 0);
}
