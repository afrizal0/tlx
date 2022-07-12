#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, q;
	cin >> a >> b >> c >> q;
	vector<int> v = {a, b, c};
	if(q==0) {
		sort(v.begin(), v.end(), greater<int>());
		
	}else if(q==1){
		sort(v.begin(), v.end());
	}
	for(int i=0; i<3; i++){
		cout << v[i] << " ";
	}
}
