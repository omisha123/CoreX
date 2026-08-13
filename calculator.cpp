#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    cout << "1.Add(+)\n2. Subtract(-)\n3. Multiply(*)\n4. Divide(/)\n5.Modulus(%)\n6. Power(^)\n";
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
        case 5:
            cout << "Result: " << a % b;
            break;
        case 6:
            cout << "Result: " << pow(a, b);
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;
}
