#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, n) for(int i=0; i<n; i++)
#define pb push_back
#define bs binary_search

int nums[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

int i=0;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;

while(n>0){
    int total=0;
    while(n-nums[i]>=0){
       total++;
       n-=nums[i];
    }
    if(total>0)
        cout << nums[i] << " " << total << endl;
    i++;
}


return 0;
}

