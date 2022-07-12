#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, n) for(int i=0; i<n; i++)
#define pb push_back
#define bs binary_search

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
vector<int> v(n);
FOR(i, n){
    cin >> v[i];
}
int q;
cin >> q;
for(int i=0; i<q; i++){
    int num;
    cin >> num;
    int l=0, r=n-1, temp;
    bool isTrue=false;
    while(l<=r){
        int m = (l+r)/2;
        if(v[m] == num){
            temp=m;
            isTrue=true;
            r=m-1;
        }
        else if(v[m] > num) r=m-1;
        else if(v[m] < num) l=m+1;
    }
    (isTrue) ? cout << temp << "\n" : cout << -1 << "\n";
}
    

return 0;
}


