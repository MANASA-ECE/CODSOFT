#include <iostream>
using namespace std;
int main() 
{
    int choice, a, b;
    cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Enter the augend: ";
            cin>>a;
            cout<<"Enter the addend: ";
            cin>>b;
            cout<<"Sum = "<<a+b;
            break;
        case 2:
            cout<<"Enter the minuend: ";
            cin>>a;
            cout<<"Enter the subtrahend: ";
            cin>>b;
            cout<<"Difference = "<<a-b;
            break;
        case 3:
            cout<<"Enter the multiplicand: ";
            cin>>a;
            cout<<"Enter the multiplier: ";
            cin>>b;
            cout<<"Product = "<<a*b;
            break;
        case 4:
            cout<<"Enter the dividend: ";
            cin>>a;
            cout<<"Enter the divisor: ";
            cin>>b;
            cout<<"Quotient = "<<a/b<<endl;
            cout<<"Reminder = "<<a%b;
            break;
        default:
            cout<<endl<<"Invalid choice";
    }
    return 0;
}
