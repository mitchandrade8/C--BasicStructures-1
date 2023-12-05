

#include <iostream>
using namespace std;

int main() {

    double debt[] = {23.67, 82.96, 34.51};

    for (int i = 0; i < sizeof(debt) / sizeof(debt[0]); i++) {
        cout << debt[i] << endl;
    }

    return 0;

}