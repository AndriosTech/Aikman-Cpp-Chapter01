#include<iostream>
using namespace std;

int main()
{
    string name,add;
    int age;
    cout<<"Enter your name"<<endl;
    getline(cin,name);

    cout<<"Enter your address"<<endl;
    cin>>add;

    cout<<"Enter your age"<<endl;
    cin>>age;

    cout<<"Your Name is "<<name<<", from "<<add<<", and your age is "<<age<<endl;
}