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
ll t;
cin >> t;
string s;
cin >> s;
int i=0;
while(i<t){
	for(int j=i+1; j<t; ++j){
		if((s[i]>s[j] )&& (s[j]!=s[i-1] || i==i) && ( i==t-1 || s[j+1] != s[j])){
			char temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++;
		}	
		cout << s << " ";
	}
	++i;
}
cout << "\n HASIL \n";
cout << s << "\n";

// ACBAC
// i=0, 
// i=1, j=2
//  


// BADBC
// ABDBC
// ABDBC
// ABCBD -> ACC

// ACBAC
// ABCAC
// ABAC

/*
S[i] != S[i+1] -> s[i] = s[i+1] <--> ; i++

   */
return 0;
}

