#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    cout << "1. +\n2. -\n3. *\n4. /\n";
    cout << "Enter your choice: ";
    cin >> c;

    switch(c){
        case 1:
            cout << "Result: " << a + b;
            break;
        case 2:
            cout << "Result: " << a - b;
            break;
        case 3:
            cout << "Result: " << a * b;
            break;
        case 4:
            cout << "Result: " << a / b;
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;
}
