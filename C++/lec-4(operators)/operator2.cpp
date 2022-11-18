#include <iostream>
using namespace std;

int main() {
    int num1=5; //0101
    cout<<(num1<<2)<<endl;  //5*2^2=20
    cout<<(num1>>2)<<endl;  //5/2^2=1

    int num2=10; //1010
    cout<<(num1&num2)<<endl; //0000=0
    cout<<(num1|num2)<<endl;  //1111=15
    return 0;
}


