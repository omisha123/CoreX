#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter 2 numbers: ";
    float a,b;
    cin>>a>>b;
    cout<<"Enter 1 for +, 2 for -, 3 for *, 4 for /, 5 for modulo, 6 for exponential: ";
    int c;
    cin>>c;

    switch(c)
    {
        case 1:
        {
        cout<<"Sum: "<<a+b;
        break;
        }
        case 2:
        {
        cout<<"Difference: "<<a-b;
        break;
        }
        case 3:
        {
        cout<<"Multiplication: "<<a*b;
        break;
        }
        case 4:
        {
        cout<<"Division: "<<a/b;
        break;
        }
        case 5:
        {
        cout<<"Modulo: "<<a%b;
        break;
        }
        case 6:
        {
        cout<<"Exponential: "<<a^b;
        break;
        }
        default:
        cout<<"Invalid choice";
    }
    return 0;
}
