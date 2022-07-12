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
int n, max=1;
cin >> n;
while(n--){
	int a;
	cin >> a;
   	if(max<a) max=a;
}
cout << max << "\n";


return 0;
}

