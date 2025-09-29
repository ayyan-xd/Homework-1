#include<iostream>
#include<numeric>
using namespace std;
int main(){
    int num1, num2, den1,den2, num, den;
    char op;
    cout<<"enter numerator and denominator for first fraction : ";
    cin>>num1>>den1;
    cout<<"\nenter numerator and denominator for second fraction : ";
    cin>>num2>>den2;
    cout<<"\nenter operation to be performed";
    cin>>op;
    if(op=='+'){
        den=den1*den2;
        num=num1*den2+num2*den1;
    }
    else if(op=='-'){
        den=den1*den2;
        num=num1*den2+num2*den1;
    }
   else if(op=='*'){
        num=num1*num2;
        den=den1*den2;
    }
    else if(op=='/'){
        num=num1*den2;
         den=num2*den1;
    }
    else{
        cout<<"invalid operation";
    }
    int d=gcd(num,den);

    cout<<"\nresult is " <<num/d<<"/"<<den/d;
}