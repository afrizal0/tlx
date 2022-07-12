#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		int x;
		cin >> x;
		bool result=true;
		if(x<2) result=false;
		int divisor=2;
		while(divisor*divisor<=x){
			if(x%divisor==0) result=false;
			divisor++;
		}
		if(result) cout << "YA" << endl;
		else cout << "BUKAN" << endl;
	}
			
}
