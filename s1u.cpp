#include <iostream>
using namespace std;
int main()
{
 int a, b;
 char c;
 cin >> a >> c >> b;
 switch (c)
 {
 case '=':
        if (a==b)cout << "Right"; 
        else cout << "Wrong";
        break;

 case '<' :
        if(a<b) cout << "Right";
        else cout << "Wrong";
        break;

 case '>' :
        if (a>b) cout << "Right";
        else cout << "Wrong";
        break;
 }


  return 0;
}