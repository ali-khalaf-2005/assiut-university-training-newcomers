#include <iostream>
using namespace std;
int main ()
{
  int n, num, even=0, odd=0, neg=0, pos=0;
  cin >> n;
  for (int i =1;i<=5;i++)
  {
     cin >> num;
     if (num%2 ==0){
         even++;    
        }
     else 
        odd++;
     if (num > 0){
        pos++;
        }
    else if (num <0){
      neg++;
    }
     

  }
  cout << "Even: " << even << "\n";
      cout << "Odd: " << odd << "\n";
      cout << "Positive: " << pos << "\n";
      cout << "Negative: " << neg << "\n";
}


