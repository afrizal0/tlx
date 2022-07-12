#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	int arr[N];
	string ars[N];
	for(int i=0; i<N; i++) {
		cin >> ars[i] >> arr[i];
	}
	for(int i=0; i<Q; i++){
		string v;
		cin >> v;
		int l=0, r=N-1;
		bool temp=false;
		int result;
		while(l<=r) {
			int	m = l+(r-l)/2;
			int res=-1000;
			if(v==(ars[m])) {
				temp=true;
				result = m;
				break;
			}
			if(v > (ars[m])) l=m+1;
			else r=m-1;
		}
		if(temp) {
			cout << arr[result] << "\n";
		}
		else { 
			cout << "NIHIL\n";
		}
	}
	
	return 0;
}
