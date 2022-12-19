#include<iostream>
using namespace std;

int main()
{
    int age, months, days, hours, minutes, seconds;

    cout<<"Enter your age in years"<<endl;
    cin>>age;

    months = age * 12;
    days = age * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    cout<<"You age in Months = "<<months<<endl<<"Days = "<<days<<endl<<"Hours = "<<hours<<endl<<"Minutes = "<<minutes<<endl<<"Seconds = "<<seconds<<endl;
    
}