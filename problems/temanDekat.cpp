#include <iostream>
#include <math.h>
using namespace std;

int N, D;
int F(int x1, int y1, int x2, int y2) {
	return pow(abs(x1 - x2), D) + pow(abs(y1 - y2), D);
}

int main() {
	cin >> N >> D;
	int arr[N][2];
	for(int i=0; i<N; i++) {
		for(int j=0; j<2; j++) {
			cin >> arr[i][j];
		}
	}
	int max=-1000000000, min=1000000000;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(i==j) continue;
			int temp = F(arr[i][0], arr[i][1], arr[j][0], arr[j][1]);
			if(temp > max) max=temp;
			else if(temp < min) min=temp;
		}
	}
	

	cout << min << " " << max << "\n";
}
