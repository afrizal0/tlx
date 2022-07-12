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
int n, Q;
cin >> n >> Q;
string s[n+5];
int num[n+5];

for(int i=1; i<=n; i++){
	cin >> s[i] >> num[i];
}
while(Q--){
	string name;
	cin >> name;
	int l=1, r=n, mid;
	bool temp=false;
	while(l<=r && temp != true){
		mid=(l+r)/2;
		if(name<s[mid])
			r=mid-1;
		else if(name>s[mid])
			l=mid+1;
		else{
			temp=true;
		}
	}
	if(temp) cout << num[mid] << "\n";
	else cout << "NIHIL\n";

}
return 0;
}

