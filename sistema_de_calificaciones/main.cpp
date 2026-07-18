#include <iostream>

using namespace std;

int main() {
    bool status = true;
    string name;
    while(status) {
        cout << "Ingrese su nombre\n";
        cin >> name;
        cout << "Hola" << name;
    }

    return 0;
}
