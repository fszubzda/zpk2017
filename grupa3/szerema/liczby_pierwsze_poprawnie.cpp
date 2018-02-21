
#include <iostream>
using namespace std;

int main()
{
int n;
  cin >> n;

  for (int i = 2;i*i<= n;i++)
  {
    if ((n%2!=0)&&(n%3!=0)&&(n%5!=0))
    {

    cout << "zlozona" << endl;
        return 0;
    }
  }

  cout << "pierwsza" << endl;

    return 0;
}

