#include <iostream>
using namespace std;

int main () {
    int angka;
    cin>>angka;
    
    if (angka< 0) {
        cout << "Negatif" << endl;
    } else if (angka % 2 == 0) {
        cout << "Positif Genap" << endl;
    } else {
        cout << "Positif Ganjil" << endl;
        
    }     
    
    return 0;
}
