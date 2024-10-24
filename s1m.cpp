#include <iostream>
using namespace std;
int main () {
  char x;
  cin >> x;
  if (x >= '0' && x<= '9')
     cout << "IS DIGIT";
  else {
     if (x >= 'a' && x <= 'z')
         cout << "ALPHA" << "\n" << "IS SMALL";
     else 
         cout << "ALPHA" << "\n" << "IS CAPITAL";
  }
   return 0;
}
