#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, D;
	cin >> N >> D;
	vector<int> v;
	for(int j=0; j<N; j++){
		int n;
		cin >> n;
		v.push_back(n);
	}
	for(int i=0; i<v.size(); i++){
		if(v[i] == D){
			cout << i << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
	return 0;
}
