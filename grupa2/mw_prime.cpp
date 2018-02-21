#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool isPrime = true;

  cout << "Podaj liczbe: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "Podana liczba jest liczba pierwsza";
  else
      cout << "Podana liczba nie jest liczba pierwsza";

  return 0;
}
