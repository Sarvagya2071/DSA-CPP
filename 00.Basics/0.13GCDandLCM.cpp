#include<iostream>
using namespace std;

int main()
{
    int A, B, k;
    cin>>A;
    cin>>B;
    //GCD or HCF
        for(k=A; k<=A*B; k++){
            if(k%A==0 && k%B==0){
                cout<<"LCM of "<<A<<" and "<<B<<" is "<<k;
                break;
            }
        }
    //LCM
        while(A>0 && B>0){
            if(A>B) A = A%B;
            else B = B%A;
        }
            if(A==0) cout<<", while their GCD is "<< B;
            else cout<<", while their GCD is "<< A;
    return 0;
}