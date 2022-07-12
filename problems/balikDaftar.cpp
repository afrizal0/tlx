#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[105], i=0;
	while(cin >> arr[i]){
		i++;
	}
	for(int j=i-1; j>=0; j--){
		cout << arr[j] << "\n";
	}
}

