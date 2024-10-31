#include <iostream>
#include <fstream>
using namespace std;

 int main(){
  int n, num;
  int maxx =0;
  cin >> n;
  for (int i=1;i<=n;i++)
  {
      cin >> num;
      {
           if (num > maxx)
        maxx=num;

      }

  }
        cout << maxx;


   return 0;
 }
