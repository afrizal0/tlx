#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> arr = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int in=0, K, i=0, res=0;
	cin >> K;
	for(int i=0; i<arr.size(); i++){
		if(K>=arr[i]){
			int count = K/arr[i];
			cout << arr[i] << " " << count << "\n";
			K -= arr[i]*count;
		}
	}
	
}
