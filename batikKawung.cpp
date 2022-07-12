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
int a, b;
char c;
cin >> a >> c >> b;
for(int i=0; i<a; i++){
	for(int j=0; j<a; j++){
		if(j==0+i || j==a-i-1) cout << b;
		else cout << c;
	}
	cout << "\n";
}


return 0;
}

