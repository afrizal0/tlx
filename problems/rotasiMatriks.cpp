#include <bits/stdc++.h>
using namespace std;
int main(){
	int M, N, matriks[101][101];
	cin >> M >> N;
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			cin >> matriks[i][j];
		}
	}
	for(int i=0; i<N; i++){
		for(int j=M-1; j>=0; j--){
			cout << matriks[j][i];
			if(j>0) cout << " ";
			else cout << "\n";
		}
	}
	return 0;
}
