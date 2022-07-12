#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		int A, B, L;
		cin >> A >> B >> L;
		int result;
		if(L>2000){
			result = (((L-2000)*B)/100)+A;
		}else{
			result=A;
		}
		cout << result << endl;
	}
}
			
