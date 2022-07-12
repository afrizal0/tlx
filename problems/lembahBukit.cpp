#include <stdio.h>
#define ll long long
using namespace std;
int main(){
	ll a, min, max=0;
	while(scanf("%lld", &a) != EOF){
		if(max<a) {
			max=a;
			min=max;
		}
		else if(min>a)
			min=a;
		
	}
	printf("%lld\n", max-min);
}
