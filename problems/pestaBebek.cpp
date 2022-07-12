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
int n;
cin >> n;
vector<string> v;
string s;
while(n-- && cin >> s){
	v.pb(s);
	string temp=s;
	sort(v.begin(), v.end());
	auto it = find(v.begin(), v.end(), temp);
	auto index = std::distance(v.begin(), it);
	cout << index+1 << "\n";
}	

return 0;

}

