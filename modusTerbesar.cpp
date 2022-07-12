#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, i, modus, count, x[100000], j, M=1;
	cin >> N;
	for(i=0; i<=N-1; i++){
		cin >> x[i];
	}
	modus=x[0];
	for(i=0; i<=N-1; i++){
		if(x[i]>0){
			count=1;
			for(j=i+1; j<=N-1; j++){
				if(x[i]==x[j]){
					x[j]=0;
					count=count+1;
				}
			}
			if(count>M){
				M=count;
				modus=x[i];
			}
			else{
				if(count==M){
					if(x[i]>modus){
						M=count;
						modus=x[i];
					}
				}
			}
		}
	}
	cout << modus << "\n";
	return 0;
}
		
