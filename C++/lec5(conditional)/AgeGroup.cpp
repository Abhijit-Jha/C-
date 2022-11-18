#include <iostream>
using namespace std;

int main(){
    int Age;
    cout<<"Enter Your Age:"<<endl;
    cin>>Age;

    if(Age<12){
        cout<<"Children"<<endl;
    }
    else if(Age<=18){
        cout<<"Teenager"<<endl;
    }
    else if(Age<=50){
        cout<<"Adult"<<endl;

    }
    else{
        cout<<"Old Age"<<endl;
        
    }


    



    return 0;
}