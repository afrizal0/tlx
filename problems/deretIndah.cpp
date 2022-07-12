#include <bits/stdc++.h>
using namespace std;
int main(){
	int S, N, D;
	cin >> S >> N >> D;
	int i=1;
	cout << S << "\n";
	while(i<N){
		S+=D;
		cout << S << "\n";
		i++;
	}
}
	
