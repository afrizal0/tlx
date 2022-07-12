#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	bool up=false, low=false, num=false, charac=false;
	for(int i=0; i<str.length(); i++){
		if(isupper(str[i])) up=true;
		if(islower(str[i])) low=true;
		if(isdigit(str[i])) num=true;
		if(str[i] == '_' || str[i] == '!' || str[i] == '?') charac=true;
	}
	if(up && low && num && charac && str.length() >= 8){
		cout << "Kuat\n";
	} else if(str.length()>12&&(up || low)&&!(num)&&!(charac)){
		cout << "AgakKuat\n";
	}else{
		cout << "Lemah\n";
	}

}
