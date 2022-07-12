#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	if(N<=1){
		cout << "Not Prime" << endl;
		return 0;
	}
	int i=2;
	while(i*i <= N) {
		if(N%i==0){
			cout << "Not Prime" << endl;
			return 0;
		}
		i++;
	}
	cout << "Prime" << endl;
}
