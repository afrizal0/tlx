#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR for(int i=0; i<n; i++)
#define pb push_back


int main(){
ios::sync_with_stdio(0);
cin.tie(0);
deque<int> q;
int n;
cin >> n;
while(n--){
	string str;
	cin >> str;
	if(str=="add"){
		int x, y;
		cin >> x >> y;
		while(y--){
			q.push_back(x);
		}
		cout << q.size() << "\n";
	}else if(str=="del"){
		int x;
		cin >> x;
		cout << q[0] << "\n";
		while(x--){
			q.pop_front();
		}
	}else if(str=="rev"){
		reverse(q.begin(), q.end());
	}
}



return 0;
}

