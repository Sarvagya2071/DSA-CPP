// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum, a, b;
//      cin>>a;
//      sum = 0;
//      while (a<0){
//          b = a % 10;
//          sum = sum + b;
//          a = a/10;
//      }
//      while (a>0){
//          b = a % 10;
//          sum = sum + b;
//          a = a/10;
//     }
//     cout<<sum<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    float num;
    cin>>num;
    int sum = 0;
    string s = to_string(num);
    for(auto it : s){
        if(isdigit(it)) sum += it - '0';
    }
    if(num<0){
        sum = -1*sum;
    }
    cout << sum << endl;
    return 0;
}