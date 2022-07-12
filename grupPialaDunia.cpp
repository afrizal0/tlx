#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR for(int i=0; i<n; i++)
#define pb push_back


int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
while(n--){
	int s;
	cin >> s;
	int res=0;
	for(int i=0; i<s; i++){
		int q;
		cin >> q;
		res+=q;
	}
	if(res>20) cout << "NO\n";
	else cout << "YES\n";
}


return 0;
}

