#include <iostream>
using namespace std;

int main() {
    int angka ;
    cin >> angka ;
    
    if (angka>= 0 && angka <=9){
        cout << "Satuan" << endl;
    } else if (angka >= 10 && angka <= 99) {
        cout << "Puluhan" << endl;
    } else if (angka >= 100 && angka <= 999) {
        cout << "Ratusan" << endl;
    } else {
        cout << "Tidak Tahu" << endl; 
    }    
    
    
}
