#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, b, n;
	cin	>> k >> b >> n;
	int arr[101][101];
	for(int i=1; i<=k; i++){ 
		for(int j=1; j<=b; j++){
			cin >> arr[i][j];
		}
	}
		pair<int, int> temp = {INT_MAX, INT_MAX};
		for(int ba=1; ba<=k; ba++){
			for(int ko=1; ko<=b; ko++){
                int res=0;
                if(ko==1){
                    if(ba==1) {
                        res=arr[ba][ko+1] * arr[ba+1][ko];
                    }
                    else if(ba==k){
                        res=arr[ba-1][ko] * arr[ba][ko+1];
                    }
                    else{
                        res=arr[ba-1][ko]*arr[ba][ko+1]*arr[ba+1][ko];
                    }
                }else if(ko==b){
                    if(ba==1) {
                        res=arr[ba][ko-1] * arr[ba+1][ko];
                    }
                    else if(ba==k){
                        res=arr[ba-1][ko] * arr[ba][ko-1];
                    }
                    else{
                        res=arr[ba-1][k]*arr[ba][k-1]*arr[ba+1][ko];
                    }
                }else{
                    res=arr[ba-1][ko]*arr[ba+1][ko]*arr[ba][ko+1]*arr[ba][ko-1];
                }
			  
                if(res==n&&ko<temp.second){
                    temp.first=ba, temp.second=ko;
                }else if(res==n&&ko==temp.second&&ba<temp.first){
                    temp.first=ba, temp.second=ko;
                }
            }
        }
        cout << temp.first << " " << temp.second << "\n";

	return 0;
}
   /*
				if(ko==1 && ba==1) {
					int res = arr[ko][ba+1] * arr[ko+1][ba];
					if(res==n) cout << ko << " " << ba << "\n";
				}
				else if(ko==k && ba==1) {
					int res = arr[ko-1][ba] * arr[ko][ba+1];
					if(res==n) cout << ko << " " << ba << "\n";
				}
				else if(ko==1 && ba==b) {
					int res = arr[ko][ba-1] * arr[ko+1][ba];
					if(res==n) cout << ko << " " << ba << "\n";
				}
				else if(ko==k && ba==b) {
					int res = arr[ko-1][ba] * arr[ko][ba-1];
					if(res==n) cout << ko << " " << ba << "\n";
				}
				else if(ba==1) {
					int res = arr[ko-1][ba] * arr[ko][ba+1] * arr[ko+1][ba];
					if(res==n) cout << ko << " " << ba << "\n";
				}
				else if(ba==b) {
					int res = arr[ko-1][ba] * arr[ko][ba-1] * arr[ko+1][ba];
					if(res==n) cout << ko << " " << ba << "\n";
				}
			*
			 * ko=1 && ba=1 --> arr[ko][ba+1] * arr[ko+1][ba]
			 * ko=k && ba=1 --> arr[ko-1][ba] * arr[ko][ba+!]
			 * ko=1 && ba=b --> arr[ko][ba-1] * arr[ko+!][ba]
			 * ko=k && ba=b --> arr[ko-1][ba] * arr[ko][ba-1]
			 * ba=1 --> arr[ko-1][ba] * arr[ko][ba+1] * arr[ko+!][ba]
			 * ba=b --> arr[ko-1][ba] * arr[ko][ba-1] * arr[ko+!][ba]
			 * 
			 */
