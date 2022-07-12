#include <iostream>
using namespace std;
int main(){
	int P, Q;
	cin >> P >> Q;
	int result = P*P*Q*Q+1;
	if(result%4==0) cout << result/4 << "\n";
	else cout << -1 << "\n";
}
