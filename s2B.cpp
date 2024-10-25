#include <iostream>
using namespace std;
int main () {
 
int a;
cin >> a;
if (a==1)
cout << -1 << "\n";
else {
    for (int i=2; i<=a; i+=2)
    {
        cout << i << "\n";
    }
 }
    return 0;
}
