#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string name;
    int id;
    double csm, amt, tax, total;
    cout<<"\n\t**************************************************\n";
    cout<<"\t\t:E l e c t r i c i t y    B i l l:\n";
    cout<<"\t**************************************************\n";
    cout<<"Enter Customer Name: ";
    getline(cin,name);
    cout<<"Enter Customer ID: ";
    cin>>id;
    cout<<"Enter the unit consumed by the customer: ";
    cin>>csm;
    if(csm>=0 && csm<=100)
    {
        amt=csm*1;
    }
    else if(csm>100 && csm<=200)
    {
        amt=((csm-100)*2)+100;
    }
    else if(csm>200 && csm<=300)
    {
        amt=((csm-200)*3)+200;
    }
    else if(csm>300 && csm<=400)
    {
        amt=((csm-300)*4)+300;
    }
    else
    {
        amt=((csm-500)*5)+1400;
    }
    //calculate tax
    tax=(amt*10)/100;
    total=amt+50+tax;

    cout<<"\n\nCustomer ID: "<<id<<endl;
    cout<<"Customer Name: "<<name<<endl;
    cout<<"Unit Consumed by Customer: "<<csm<<endl;
    cout<<"Bill of Units without tax is: "<<amt<<" Rs."<<endl;
    cout<<"Meter Charges : 50 Rs."<<endl;
    cout<<"Tax is: "<<tax<<endl;
    cout<<"Total Bill Pay by Customer: "<<total<<endl;

    getch();
}
