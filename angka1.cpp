#include <iostream>
using namespace std;
int main(){
	int N, j=1;
	cin >> N;
	for(int i=1; i<=N; i++){
		cout << j << "\n";
		j+=i+1;
	}
}
#include <iostream>
using namespace std;
int main(){
	int N, res=1;
	cin >> N;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cout << res << " ";
			res+=res;
		}
		cout << "\n";
		cout << res << "\n";
	}
}
