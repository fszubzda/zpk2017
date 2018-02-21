#include <iostream>

using namespace std;

int main()
{
    int lp;
    int p = 0;

    cin >> lp;
   // if (lp == 1){
      //  cout << "TAK" << endl;
      //  return 0;
    //}


    for(int i = 1; i <= lp ; i++){
        if(lp % i == 0){
            p ++;
        }
    }
    if (p == 2){
        cout << "TAK" << endl;
    } else cout <<"NIE" << endl;

    return 0;
}
