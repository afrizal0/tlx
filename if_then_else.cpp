#include <iostream>
using namespace std;
int x;
int main ()
{
  cin >> x;
  if (x > 0) 
  {
      cout << "positif" << endl;
  }
  else if (x < 0)
  {
      cout << "negatif" << endl;
  }
  else {
      cout << "nol" << endl;
  }
}
