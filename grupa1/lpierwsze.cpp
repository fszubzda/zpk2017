#include <iostream>
using namespace std;

    int main(){
    int liczba;
    cout<<"podaj liczbe: ";
    cin>> liczba;

    for(int i = 2; i<liczba; i++){
        if(liczba%i == 0){
            cout<<"Zlozona";
            return 0;
        }
        }
        cout<<"Pierwsza";
    }

