#include<iostream>
 using namespace std;
int main(){
    int num;
    cout<<"enter the amount in figures (-999999 to 999999) : ";
    cin>>num;
 if(num<-999999 || num>999999){
  cout<<"Invalid Input";
  return 1;
 }
    string ones[]={"", "one " , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" , "ten" ,
         "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" , "sixteen" , "seventeen" , "eighteen" , "nineteen"};
    string tens[]={"" , "" , "twenty" , "thirty" , "forty" , "fifty" , "sixty" , "seventy" , "eighty" , "ninety"};
    string result= "";
        if(num==0){
            result=" Zero";
        }
        if(num<0){
            result=" Negative ";
            num=-num;
        }
        if(num>=100000){
            result+=ones[num/100000] + " hundred ";
            num%=100000;
            if(num<1000){
                result+=" thousand ";
            }
        }
            if(num>=20000){
                result+=tens[num/10000];
            num%=10000;
        }
            if(num>1000){
                result+=ones[num/1000]+ " thousand ";
            num%=1000;}
            if(num>=100){
                result+=ones[num/100]+ " hundred ";
            num%=100;}
            if(num>=20){
                result+=tens[num/10];
                num%=10;
            }
            if(num<20){
                result+=ones[num];
            }

                cout<<"\nresult is : " <<result;



        } 
