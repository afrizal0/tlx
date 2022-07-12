#include <bits/stdc++.h>
using namespace std;

int factor(int A, int B, int X, int K){
	if(K==0) return X;
	else return abs(A*factor(A, B, X, K-1) + B);
}

int main(){
	int A, B, K, X;
	cin >> A >> B >> K >> X;
	cout << factor(A, B, X, K) << "\n";
}
