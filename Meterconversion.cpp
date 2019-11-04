#include <iostream>
using namespace std;

class DM;

class DB{
    float feet, inch;
    public:
    void getData()
    {
        cout<<"\nEnter the distance in(feet-inch):";
        cin>>feet>>inch;
    }
    void Display()
    {
        cout<<"\nThe distance is:";
        cout<<feet<<" feet and "<<inch<<" inch";
    }
    friend void add(DB &b, DM &a);
    
};

class DM{
    float m, cm;
    public:
    void getData()
    {
        cout<<"\nEnter the distance in(meter-centimeter):";
        cin>>m>>cm;
    }
    void Display()
    {
        cout<<"\nThe distance is:";
        cout<<m<<" meter and "<<cm<<" centimeter";
    }
    friend void add(DB &b, DM &a);

};

void add(DB &b, DM &a)
{
 int ch;
 cout<<"\nPress 1 for meter-centi:";
 cout<<"\nPress 2 for feet-inch:";
 cout<<"\nEnter your choice:";
 cin>>ch;
 if(ch==1)
 {
  DM d;
  int c=(a.m*100+a.cm+b.feet*30.48+b.inch*2.54);
  if(c>=100)
  {
   d.m=c/100;
   d.cm=c%100;
  }
  else
  {
   d.m=0;
   d.cm=c;
  }
  d.Display();
 }
 else
 {
  DB d;
  int i=(a.m*39.37+a.cm*.3937008+b.feet*12+b.inch);
  if(i>=12)
  {
   d.feet=i/12;
   d.inch=i%12;
  }
  else
  {
   d.feet=0;
   d.inch=i;
  }
  d.Display();
 }
}


int main()
{
    DM a;
    DB b;
    a.getData();
    b.getData();
    add(b,a);
    return 0;
}