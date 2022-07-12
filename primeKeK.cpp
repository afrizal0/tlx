#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sieve[1000000], prime[1000000], T, N;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	memset(sieve, 0, sizeof(sieve));
	for(ll i=2; i<=1000000; i++){
		if(sieve[i]==0){
			for(ll b=i*i; b<=1000000; b+=i){
				sieve[b] = 1;
			}
		}
	}
	ll temp=1;
	for(ll a=2; a<=1000000; a++){
		if(sieve[a] == 0){
			prime[temp] = a;
			temp++;
		}
		
	}
	scanf("%lld", &N);
	while(N--){
		scanf("%lld", &T);
		printf("%lld\n", prime[T]);
	}
	
}
