#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b,i,j,k=2;
	bool cek;
	cin >> a;
	for(b=1; b<=a; b++){
		cin >> i;
		cek=true;
		for(j=2; j<=trunc((i)/2); j++){
			if(i%j==0){
				k++;
				if(k>4){
					cek=false; 
					break;
				}
			}
		}
		if(cek==true) cout << "YA\n";
		else cout << "BUKAN\n";
		k=2;
	}
	return 0;
}
