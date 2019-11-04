#include<iostream>
using namespace std;

int main()
{   
    char ch = 'Y';
    int op;
    double a,b;
    while(ch!='N')
    {
        cout << "\nEnter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "1.Add(+)\n2.Subtract(-)\n3.Multiply(x)\n4.Divide\n";
    cout<<"Enter your choice: ";
    cin >> op;
    switch(op)
    {
        case 1:
            cout << "Sum is "<<a+b;
            break;
        case 2:
            cout << "Difference is"<<a-b;
            break;
        case 3:
            cout << "Product is"<<a*b;
            break;
        case 4:
            cout<<"Division result is"<<a/b;
            break;
           
    }
    cout << "\nEnter Y/N to continue/stop";
    cin >> ch;

    }
    
    return 0;
}
