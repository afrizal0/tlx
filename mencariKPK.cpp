#include <bits/stdc++.h>
using namespace std;

int FPB(int a, int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int a, b;
	cin >> a >> b;
	int KPK=a*b/FPB(a, b);
	cout << "KPK = " << KPK << endl;
}
	
	
