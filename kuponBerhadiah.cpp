#include <bits/stdc++.h>
using namespace std;

/*
int search(vector<int> a, int p) {
	int s=a.size()-1, res=abs(p-a[0]), hasil=a[0];
	for(int i=1; i<=s; i++){
		int av=abs(p-a[i]);
		if(av==res) {
			if(a[i]<hasil) hasil = a[i];
		}else if(av<res) {
			res=av;
			hasil=a[i];
		}
	}
	
	return hasil;
}

int main(){
	int N, P, temp;
	cin >> N >> P;
	vector<int> v;
	for(int i=0; i<N; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	cout << search(v, P) << "\n";
	*/
void F(int a[][100], int i, int p) {
	for(int k=0; k<i; k++){
		for(int j=0; j<p; j++) {
			cout << a[k][j] << " ";
		}
		cout << "\n";
	}
}


int main(){
	
	int in, ip;
	cin >> in >> ip;
	int arr[100][100];
	for(int i=0; i<in; i++){ 
		for(int j=0; j<ip; ++j){
			cin >> arr[i][j];
		}
	}
	
	F(arr, in, ip);
	
}
