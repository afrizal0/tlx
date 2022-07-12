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
string s;
cin >> s;
int loc = s.find('*');
string matchDepan = s.substr(0, loc-1), matchBelakang = s.substr(loc+);
int n;
cin >> n;
while(n--){
	string str;
	cin >> str;
	string depan =str.substr(0, loc-1), belakang=str.substr(loc+1);
  	if(str.length() != s.length()		
                                                                                       
return 0;
}

