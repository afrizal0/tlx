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
string s;
cin >> n;
cin >> s;
string res="";
res+=s[0];
char temp=s[0];
for(int i=1; i<n; i++){
    if(s[i]!=temp) res+=s[i];
    temp=s[i];
}
cout << res << "\n";


return 0;
}

