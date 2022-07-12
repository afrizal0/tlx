#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	for(int i=1; i<=N; i++) {
		if(i%10!=0) {
			if(i!=42) {
				cout << i << endl;
			} else {
				cout << "ERROR" << endl;
				return 0;
			}
		} 
	}
}
