#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, M, P;
	cin >> N >> M >> P;
	int a[N][M], b[M][P], c[N][P];
	
	for(int k=0; k<N; k++){	
		for(int i=0; i<M; i++){
			cin >> a[k][i];
		}
	}
	for(int j=0; j<M; j++){
		for(int k=0; k<P; k++){
			cin >> b[j][k];
		}
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<P; j++){
			c[i][j] = 0;
			for(int k=0; k<M; k++) {
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
}
			
