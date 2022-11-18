#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Natural Number"<<endl; cin>>n;

    int sum=0;

    int i=1; //Loop variable - Iterator

    while(i<=n){
        sum+=i;
        i++;    //updating loop variable

    }

    cout<<sum<<endl;



