#include <iostream>
using namespace std;
int main(){
    int n;
    int Factorial;
    cout << "Get the Factorial of: ";
    cin >> n;
    int i=n;
    for(Factorial=1;i>0;i--){
    Factorial*=i;}
    cout <<"The Factorial of "<<n<<" is: "<<Factorial<<"\n";

    return 0;
}