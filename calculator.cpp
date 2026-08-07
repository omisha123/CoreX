#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter 2 numbers: ";
    float a,b;
    cin>>a>>b;
    cout<<"Enter 1 for +, 2 for -, 3 for *, 4 for /: 2";
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
        }
        case 3:
        {
        cout<<"Multiplication: "<<a*b;
        }
        case 4:
        {
        cout<<"Division: "<<a/b;
        }
        default:
        cout<<"Invalid choice";
    }
    return 0;
}