#include <iostream>
#include <math.h>
using namespace std;
double n;
int f, c;
int main()
{
    cin >> n;
    int x = trunc(n);
    if (x > 0) f=x, c=x+1;
    else if (x == 0) f=x, f=c;
    else f=x-1, c=x;
    cout << f << " " << c << '\n';
}

