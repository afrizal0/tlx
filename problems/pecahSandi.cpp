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
int n, m;
cin >> n >> m;
int a[n], b[n];
FOR{
	cin >> a[i];
}
FOR
	cin >> b[i];
int res=0;
for(int i=0; i<n; i++){
	int temp=0;
	for(int j=0; j<n; j++){
		temp= ((a[j] + i)%m)*b[j] + temp ;
	}
	res = max(res, temp); 
}
cout << res << "\n";


return 0;
}

