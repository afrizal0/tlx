#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR for(int i=1; i<=n; i++)
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
int arr[n];
FOR{
	cin >> arr[i];
}

for(int i=1; i<=n; i++){
	for(int j=1; j<=n-1; j++){
		if(arr[j] > arr[j+1]){
			int temp=arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
}
float res;
int mid=(1 + n)/2;
if(n%2==0){
	res=(arr[mid] + arr[mid+1]) / 2;
}else
	res=arr[mid];

printf("%.1f\n", res);
return 0;
}

