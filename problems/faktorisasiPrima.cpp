#include <bits/stdc++.h>
using namespace std;

void FP(int num) {
	for(int i=2; i<=num; i++) {
		int counter=0;
		while(num%i==0 && num > 1) {
			num/=i;
			counter++;
		}
		if(counter != 0) {
			if(counter>1) cout << i << '^' << counter;
			else cout << i;
			if(num != 1) cout << " x ";
		}
		counter=0;	
	}
}
int main() {
	int N;
	cin >> N;
	FP(N);
	return 0;
}
