#include<iostream>
using namespace std;

class cnt
{
    static int count;
    public:
        cnt()
        {
            cout<<"Constructor called"<<endl;
            count++;
        }
        static void showcount()
        {
            cout<<count<<endl;
        }
        ~cnt()
        {
            cout<<"Destructor called"<<endl;
            count--;
        }
};
int cnt::count = 0;

int main()
{
    
    cout<<"Outer Loop"<<endl;
    cnt c1;
    c1.showcount();
    cnt c2;
 
    c2.showcount();
    {
        cout<<"Inner Loop"<<endl;
        cnt c3;
        c3.showcount();
        cnt c4;
        c4.showcount();

    }
    cout<<"Inner loop ended"<<endl;
    c2.showcount();
    return 0;
}