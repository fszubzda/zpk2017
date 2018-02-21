#include <iostream>
using namespace std;

int main() {

int l,n;
cin >> l;

    for (n=2; n*n<=l ;n++) {
        if (l % n == 0)
        {
            cout << "zlozona" << endl;
             return 0;
        }
    }

cout << "pierwsza" << endl;
return 0;
}
