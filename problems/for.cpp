#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, result = 0;
	cin >> n;
	for(int i=1; i<=n; i++){
		int B;
		cin >> B;
		result += B;
	}
	cout << result << endl;
}
