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
bool cek(string a, string b){
	if(a.length() == b.length()){
		return a<b;
	}else{
		return a.length()<b.length();
	}
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
vector<string> v(n);
int i=0;
while(n--){
	cin >> v[i];	
	i++;
}
/*
for(int i=0; i<n; ++i){
	for(int j=0; j<n-1; ++j){
		if(v[j].length() > v[j+1].length()){
			string temp = v[j];
			v[j] = v[j+1];
			v[j+1] = temp;
		}else if(v[j].length() == v[j+1].length()){
			if(v[j] > v[j+1]){
				string temp=v[j];
				v[j] = v[j+1];
		   		v[j+1] = temp;
			}
		}
	}
}	
*/
sort(v.begin(), v.end(), cek);

for(string s : v){
	cout << s << "\n";
}
return 0;

}

