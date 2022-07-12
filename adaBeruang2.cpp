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
	int n, d;
	cin >> n >> d;
	set<int> v;
	int a[n+1];
	FOR{
		cin >> a[i];
		v.insert(a[i]);
	}
	int count=0;
	FOR{
		if(v.find(a[i] + d) != v.end()){
			count++;
		}
	}
	cout << count << "\n";
	return 0;
}

