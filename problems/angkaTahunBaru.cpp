#include <bits/stdc++.h>
using namespace std;


int isPrime(int N) {
	int result;
	if(N<=1){
		result = false;
		return 0;
	}
	int i=2;
	while(i*i<=N){
		if(N%2==0){
			result = false;
			return 0;
		}
		i++;
	}
	result = true;
	return result;
}

int main(){
	int N;
	cin >> N;
	if(isPrime(N) == true && N < 7) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
