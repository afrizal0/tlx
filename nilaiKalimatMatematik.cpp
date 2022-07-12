#include <bits/stdc++.h>
using namespace std;
int main(){
	int A, B;
	char op;
	cin >> A >> op >> B;
	switch(op){
		case '+' :
			cout << A + B << "\n";
			break;
		case '-' :
			cout << A - B << "\n";
			break;
		case '*' :
			cout << A * B << "\n";
			break;
		case '<' :
			cout << (A < B ? "benar" : "salah") << "\n";
			break;
		case '>' :
			cout << (A > B ? "benar" : "salah") << "\n";
			break;
		case '=' :
			cout << (A == B ? "benar" : "salah") << "\n";
			break;
	}

}
