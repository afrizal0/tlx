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
int a, b, c;
cin >> a >> b >> c;
int res=a+b+c;
if(res>=200 && a>=50 && b>=50 && c>=50){
	cout << "Lolos\n";
	return 0;
}
cout << "Tidak Lolos\n";

return 0;
}
