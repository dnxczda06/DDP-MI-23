#include <iostream>
using namespace std;

int main(){
    int d, f, h;
    cin >> d >> f >> h;
    
    for(int i = d; i <= f; i +=h) {
        cout << i << " " ;
    }
   
    return 0;
}
