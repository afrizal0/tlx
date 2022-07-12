#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR for(int i=0; i<n; i++)
#define pb push_back

template<typename T>
void removeDuplicates(std::vector<T>& vec)
{
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int  N, n;
cin >> N >> n;
int arr[N][n];
for(int i=1; i<=N; i++){
	for(int j=1; j<=n; j++){
		cin >> arr[i][j];
	}
}

int Q, q;
cin >> Q >> q;
int arr2[Q][q];

for(int i=1; i<=Q; i++){
	for(int j=1; j<=q; j++){
		cin >> arr2[i][j];
	}
}





return 0;
}

