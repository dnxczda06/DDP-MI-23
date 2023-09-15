#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string name[12];

    cin >> name[0] >> name[1] >> name[2];
    cin >> name[3] >> name[4] >> name[5];
    cin >> name[6] >> name[7] >> name[8];
    cin >> name[9] >> name[10] >> name[11];

    cout << name[0] << " " << name[3] << " " << name[6] << " " << name[9] << endl;
    cout << name[1] << " " <<  name[4] << " " <<  name[7] << " " <<  name[10] << endl;
    cout << name[2] << " " <<  name[5] << " " <<  name[8] << " " <<  name[11] << endl;

    return 0;
}