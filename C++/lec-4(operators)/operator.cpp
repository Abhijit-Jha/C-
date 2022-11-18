#include <iostream>
using namespace std;

int main(){
    int num1=3; 
    int num2=2;

    //Arthermatic 
    // cout<<num1+num2<<endl;
    // cout<<num1-num2<<endl;
    // cout<<num1*num2<<endl;
    // cout<<num1/num2<<endl;
    // cout<<num1%num2<<endl;


    //relational operator(true=1 false=0)
    // cout<<(num1==num2)<<endl;
    // cout<<(num1=!num2)<<endl;
    // cout<<(num1>num2)<<endl;
    // cout<<(num1<num2)<<endl;



    //logical operators
    bool exp1=true;
    bool exp2=false;

   cout<<(exp1&&exp2)<<endl;
   cout<<(exp1||exp2)<<endl;
    cout<<(!exp2)<<endl;

    //Assignment operators
    num1+=4;
    cout<<num1<<endl;  //3+4

    num2-=3;
    cout<<num2<<endl; //2-3


    return 0;

}