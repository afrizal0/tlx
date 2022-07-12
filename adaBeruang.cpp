#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR for(ll i=0; i<n; i++)
#define pb push_back

template<typename T>
void removeDuplicates(std::vector<T>& vec)
{
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

int sorting(ll N, vector<long long int> ar){
	int count = 0;
	int left=0, right=ar.size()-1;
	while(left<=right){
		int tengah=(left+right)/2;
		if(N<ar[tengah]) right=tengah-1;
		else if(N>ar[tengah]) left=tengah+1;
		else {
			count++;
			return count;
		}
	}
	return count;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll n, d;
cin >> n >> d;
vector<long long int> v(n);
vector<long long int> temp(n);
FOR{
	cin >> v[i];
}
FOR {
	ll s = v[i] - d;
	temp[i] = s;
}

int res=0;
FOR{
	if(temp[i] < 1) continue;
	res += sorting(temp[i], v);
}
cout << res << "\n";
return 0;
}

