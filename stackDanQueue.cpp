#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR for(int i=0; i<n; i++)
#define pb push_back


int main(){
ios::sync_with_stdio(0);
cin.tie(0);
deque<int> v;
int n;
cin >> n;
while(n--){
	string str;
	cin >> str;
	if(str=="push_back"){
		int n;
		cin >> n;
		v.push_back(n);
	}else if(str=="push_front"){
		int n;
		cin >> n;
		v.push_front(n);
	}else if(str=="pop_back"){
		v.pop_back();
	}else if(str=="pop_front"){
		v.pop_front();
	}
}

for(int l : v){
	cout << l << "\n";
}

return 0;
}

