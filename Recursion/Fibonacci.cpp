#include <iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n, Fib=0;
    cout << "Get the Fibonacci Series till: ";
    cin >>n;
    // cout <<a<<", "<<b;
    for (int i=2;i<=n;i++){
        Fib=a+b;
        a=b;
        b=Fib;}
        cout <<Fib;

        // cout <<", "<<Fib;
    


    return 0;
}