#include<iostream>
using namespace std;

class complex{
    int real, imag;
    public:
        complex()
        {
            real = 0;
            imag = 0;
        }
        complex(int real, int imag)
        {
            this->real = real;
            this->imag = imag;
        }
        void getData()
        {
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>imag;
        }
        friend void display(complex c);
        complex operator +(complex c)
        {
            return complex(real+c.real,imag+c.imag);
        }
};

void display(complex c)
{
    cout<<c.real<<"+"<<c.imag<<"j"<<endl;
}

int main()
{
    complex c1, c2,c3;
    //complex c1 = new complex();
    c1.getData();
    cout<<"First complex number is: ";
    display(c1);
   // complexc2 = new complex();
    c2.getData();
    cout<<"Second complex number is: ";
    display(c2);
    c3=c1+c2;
    cout<<"Addition result: ";
    display(c3);
    return 0;
}