#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, n) for(int i=0; i<n; i++)
#define pb push_back
#define bs binary_search

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int maxN=n, res=0;
for(int i=2; i<=4; i++){
    res+=floor(n/i);
    maxN = max(maxN, res);
}
cout << maxN << "\n";

return 0;
}

