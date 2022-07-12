#include <iostream>
using namespace std;
int main(){
	int N, res=0;
	cin >> N;
	int arr[N][N];
	for(int i=0; i<N; i++){
		res+=i+1;
		arr[0][i] = res;
		arr[i][0] = res;
	}
	for(int i=1; i<N; i++){
		for(int j=1; j<N; j++){
			arr[i][j] = arr[i-1][j]+arr[i][j-1];
		}
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << arr[i][j];
			if(j<N-1) cout << " ";
		}
		cout << "\n";
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
