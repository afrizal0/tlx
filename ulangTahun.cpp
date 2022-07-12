#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR for(int i=0; i<n; i++)
#define pb push_back

void solve(int M, vector<string> name, vector<int> num){
		while(M--){
			string s;cin >> s;
			int l=0, r=name.size()-1;
			string res="0";
			while(l<=r && res=="0"){
				int mid = (l+r)/2;
				if(s<name[mid]){
					r=mid-1;
				}else if(s>name[mid]){
					l=mid+1;
				}else if(s==name[mid]){
					res=name[mid];
					cout << num[mid] << "\n";
				}
			}
		}
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
vector<string> name;
vector<int> num;
int n, m;
cin >> n >> m;
while(n--){
	int nn;
   	string ss;	
	cin >> ss >> nn;
	name.push_back(ss);
	num.push_back(nn);
}
solve(m, name, num);



return 0;
}

