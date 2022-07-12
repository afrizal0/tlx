#include <cstdio>
#include <string>
using namespace std;
char n[100];

int main() {
  scanf("%[^\n]\n", n);
  string k = n;
  printf("%s\n", k.c_str());
}
