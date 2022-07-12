#include <iostream>
using namespace std;
int main(){
	int N, B, K, arr[100];
	cin >> N;
	for(int i=1; i<=N; i++) {
		cin >> arr[i];
	}
	B = arr[1];
	K = arr[1];
	for(int j=1; j<=N; j++){
		if(B<arr[j]){
			B=arr[j];
		}
		if(K>arr[j]){
			K=arr[j];
		}
	}
	cout << B << " " << K << endl;
	
}
