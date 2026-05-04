//Even Fibonacci Numbers
#include <iostream>
using namespace std;
int main() {
    int a=1, sum=0, b=2;
    while(a<4000000 || b<4000000){
        
        if(a<b){
            if(a%2 == 0){
                sum+=a;
            }
            a = a+b;
        }
        else{
            if(b%2 == 0){
                sum+=b;
            }
            b = b+a;
        }
    }
    cout<<sum;
    return 0;
}