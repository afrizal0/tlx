#include <bits/stdc++.h>
using namespace std;
int main(){
	string S;
	cin >> S;
	int size = S.size(), x=0, y=0;
	for(int i=0; i<size; i++){
		if(S[i] == 'R') x++;
		else if(S[i] == 'L') x--;
		else if(S[i] == 'U') y++;
		else if(S[i] == 'D') y--;	
	}
	cout << x << " " << y << "\n";
	return 0;
}
