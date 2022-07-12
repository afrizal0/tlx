#include <iostream>
using namespace std;
int x;
int main ()
{
  cin >> x;
  if (x > 0 && x < 10) 
  {
      cout << "satuan" << endl;
  }
  else if (x >= 10 && x < 100)
  {
      cout << "puluhan" << endl;
  }
  else if (x >= 100 && x < 1000) {
      cout << "ratusan" << endl;
  }
  else if (x >= 1000 && x < 10000 ) {
      cout << "ribuan" << endl;
  }
  else if (x >= 10000 && x < 100000) {
      cout << "puluhribuan" << endl;
  }
}
