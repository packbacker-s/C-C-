#include <iostream>
#include <cstring>
using namespace std;
int main() {
  char a;
  int letter = 0, space = 0, dig = 0, other = 0;
  while((a = getchar()) != '\n') {
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
      letter++;
    else if(a == ' ')
      space++;
    else if(a >= '0' && a <= '9')
      dig++;
    else
      other++;
  }
  cout << letter << endl << space << endl << dig << endl << other << endl;
  return 0;
}
