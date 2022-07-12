#include <bits/stdc++.h>
using namespace std;

int main(){	
	float a;
	cin >> a;
	int b = trunc(a);
	
	if(a==b){
		cout << b << " " << b << endl;
	}
	else if(a>0) {
		cout << b << " " << b+1 << endl;
	}
	else if(a<0) {
		cout << b-1 << " "<< b << endl;
	}
	else {
		cout << b << " " << b << endl;
	}
	
}
