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
ll n, b;
cin >> n >> b;
int arr[n+1];
FOR{
	cin >> arr[i];
}
int res=0;
for(int i=b; i>=1; i--){
	int temp=arr[i] + arr[i+1];
	res+=temp;
}
cout << res << "\n";	

return 0;
}

