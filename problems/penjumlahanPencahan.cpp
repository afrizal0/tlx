#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR for(int i=0; i<n; i++)
#define pb push_back

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll a, b, c, d;
cin >> a >> b >> c >> d;
ll pemb=(b*d) / __gcd(b, d);
ll x=a*(pemb/b) + c*(pemb/d);
if(__gcd(pemb, x) != 1){
	ll fpb = __gcd(pemb, x);
	x/=fpb;
	pemb/=fpb;
	cout << x << " " << pemb << "\n"; 
}else{
	cout << x << " " << pemb << "\n";
}
return 0;
}

