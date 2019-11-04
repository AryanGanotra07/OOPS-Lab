#include<iostream>
using namespace std;


double Power(double n, int p)
{
int i;
double t=n;
for(i=1;i<p;i++)
{
    t*=n; 
}
return t;
}
double Power(double n)
{
return n*n;
}

int main()
{
    double n;
    int p,ch;
    cout << "Enter value: " ;
    cin >> n;
    cout << "Enter 1 to enter power or 0 to use default power: ";
    cin >> ch;
    if(ch==0)
    {
     cout <<double(Power(n));   
     return 0;
    }
    cout << "Enter power: ";
    cin >> p;
    cout << double(Power(n, p));
    return 0;
    
}