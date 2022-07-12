#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	int result = 0;
	for(int i=1; i<=N; i++) {
		for(int j=0; j < i; j++){
			if(result > 9) {
				result = 0;
			}
			cout << result;
			result++;
		}
		cout << endl;
	}
}
