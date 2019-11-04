#include<iostream>
using namespace std;

class Phone{
    private : 
        int exch, aCode, num;
    public:
        Phone()
        {
            this->exch = 767;
            this->aCode = 212;
            this->num = 8900;
        }
        Phone(int exch, int aCode, int num)
        {
            this->aCode = aCode;
            this->num = num;
            this->exch = exch;
        }
        void Display()
        {
            cout<<"("<<aCode<<")"<<" "<<exch<<"-"<<num<<"\n";
        }

}*p1, *p2;

int main()
{
    int exch, aCode, num;
    p1 =  new Phone();
    cout << "Initialised phone class:\n";
    p1->Display();
    cout << "Enter area code: ";
    cin >> aCode;
    cout << "Enter exchange: ";
    cin >> exch;
    cout << "Enter num";
    cin >> num;
    p2 = new Phone(exch , aCode, num);
    cout << "Input phone class:\n";
    p2->Display();


    return 0;
    
}