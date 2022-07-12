#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll N, i=0, max, min, result;
	while(cin >> N){
		if(i==0) max=N, min=N;
		if(N>max) max=N;
		else if(N<min) min=N;
		i++;
	}
	result=max-min;
	cout << result << "\n";
}
	
	
