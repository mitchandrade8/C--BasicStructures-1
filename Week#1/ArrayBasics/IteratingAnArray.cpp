

#include <iostream>
using namespace std;

int main() {

    string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen", "Fred", "Grace", "Henry", "Ian", "Jen"};

    // Inefficient way 
    /* 
    cout << friends[0] << endl;
    cout << friends[1] << endl;
    cout << friends[2] << endl;
    cout << friends[3] << endl;
    cout << friends[4] << endl;
    cout << friends[5] << endl;
    cout << friends[6] << endl;
    cout << friends[7] << endl;
    cout << friends[8] << endl;
    cout << friends[9] << endl;
    */

    for (int i = 0; i < 10; i++) {
        cout << friends[i] << endl;
    }

    cout << sizeof(friends) << endl;

    cout << sizeof(friends) / sizeof(friends[0]) << endl;

    for (int i = 0; i < sizeof(friends) / sizeof(friends[0]); i++) {
        cout << friends[i] << endl;
    }

    return 0;

}