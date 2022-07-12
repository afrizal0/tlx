#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y){
	while(y>0){
		x+=7;
		y-=5;
		if(x==y) {
			return y;
		}
	}
	return 0;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int i=1;
	while(n--){
		int X, Y;
		cin >> X >> Y;
		if(solve(X, Y) != 0){
			cout << "Case #" << i <<": "<< solve(X, Y) << "\n";
		}else{
			cout << "Case #" << i <<": "<< "impossible" << "\n";
		}
	}
}
