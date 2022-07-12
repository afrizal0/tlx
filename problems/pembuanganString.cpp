#include <bits/stdc++.h>
using namespace std;
int main(){
    string S, T;
    cin >> S >> T;
    size_t result=S.find(T);
    while(result != string::npos) {
		S.erase(result, T.length());
		result=S.find(T);
	}
    cout << S << "\n";
}
