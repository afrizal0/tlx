#include <iostream>
using namespace std;
int main(){
	int A, B;
	cin >> A >> B;
	for(int i=1; i<=A; i++){
		if(i%B==0) {
			cout << "*";
		} else {
			cout << i;
		}
		if(i<A) {
			cout << " ";
		} else {
			cout << endl;
		}	
	}
}
		
		
