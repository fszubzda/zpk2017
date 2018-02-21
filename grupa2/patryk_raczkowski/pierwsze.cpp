#include <iostream>

using namespace std;

int main()
{
    int p=0;
    int licznik=0;
    cin >> p;
    for(int i=1 ; i<p; i++){
        if(p%i==0){
            licznik = licznik + 1;
        }
    }
    if(licznik > 2){
        cout << "Zlozona";
    }else{
        cout << "Pierwsza";
    }
}
