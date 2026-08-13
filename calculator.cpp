#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    cout<<"======SIMPLE CALCULATOR======\n";
    cout<<"Select an operation:\n";
    cout << "1. Add(+)\n2. Subtract(-)\n3. Multiply(*)\n4. Divide(/)\n5. Modulus(%)\n6. Power(^)\n";
    cout << "Enter your choice: ";
    cin >> c;

    switch(c){
        case 1:
            cout << "Result: " << a + b<<endl;
            break;
        case 2:
            cout << "Result: " << a - b<<endl;
            break;
        case 3:
            cout << "Result: " << a * b<<endl;
            break;
        case 4:
            cout << "Result: " << a / b<<endl;
            break;
        case 5:
            cout << "Result: " << a % b<<endl;
            break;
        case 6:
            cout << "Result: " << pow(a, b)<<endl;
            break;
        default:
            cout << "Invalid choice"<<endl;
            break;
    }
    return 0;
}
