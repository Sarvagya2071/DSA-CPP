#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter marks\n";
    cin>>marks;
    if (marks < 25){
        cout<<"F";
    }
    else if (marks<=44){
        cout<<"E";
    }
    else if (marks <= 49){
        cout<<"D";
    }
    else if (marks <= 59){
        cout<<"C";
    }
    else if (marks <= 79){
        cout<<"B";
    }
    else if (marks <= 100){
        cout<<"A";
    }
    else{
        cout<<"Invalid marks";
    }
    return 0;
}