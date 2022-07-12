#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		string K;
		cin >> K;
		for(int j=0; j<K.length(); j++){
			if(j==0 || j%2==0){
				char c = K[j] - 32;
				K[j] = c;
			}
		}
		cout << K << endl;
		
	}
	
}
		
