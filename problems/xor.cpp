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
ll n;
cin >> n;
int arr[n];
FOR{
	cin >> arr[i];
}

ll temp;
for(ll i=0; i<n-1; i++){
	for(ll j=i+1; j<n; j++){
		ll res = arr[i] ^ arr[j];
		if(i==0) temp = res;
		else temp*=res;
	}
}
cout << temp;
return 0;
}

