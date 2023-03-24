#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age:\n";
    cin>>age;
    if (age < 18){
        cout<<"Not eligible for job";
    }
    else if (age <= 57){
        cout<<"Eligible for the job";
        if (age >= 55){
            cout<<"Eligible for the job, but retirement soon";
        }
    }
    else if (age > 57){
        cout<<"Retirement time";
    }
    return 0;
}