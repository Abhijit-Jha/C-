#include <iostream>
using namespace std;

int main(){
    int a=5;
    cout<<sizeof(a)<<endl; //4 bytes

    char name='f';
    cout<<sizeof(name)<<endl;  //1 bytes

    bool flag;
    a==name? flag=true :flag=false;
    cout<<flag<<endl; //false=0
    
    cout<<(&a)<<endl;


    a=6;
    // cout<<(a++)<<endl;//6 
    cout<<(++a)<<endl;//8 coz of a++(comment out the above statement)
    int b=5;

    cout<<(--b)<<endl;//4
    return 0;

}