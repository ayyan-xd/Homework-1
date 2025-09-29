#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


int main(){
    double N;
    cout<<"Enter a Number : ";
    cin>>N;

    if(N<0){
        cout<<"Enter a Positive Number ";
        return 0;
    }
    if(N==0){
        cout<<"Square Root is 0.00 ";
    }
    
    double a,b;
    if(N<1){
        a=0;
        b=1;
    }else{
        a=0;
        b=N;
    }
    double mid;
    const double tolerance = 0.001;

    while((b-a)>tolerance){
        mid=(a+b)/2;
        double f_mid=mid*mid -N;
    
        if(f_mid==0){
            cout<<"Exact Root Found : "<<mid;
            return 0;
        }
        else if(f_mid>0){
            b=mid;
        }
        else{
            a=mid;
        }
    }
    mid=(a+b)/2;
    cout<<fixed<<setprecision(2);
    cout<<"Square root of "<<N<<" is : "<<mid<<endl;

    return 0;
}