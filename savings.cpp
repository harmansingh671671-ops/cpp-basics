#include<iostream>
using namespace std;
int main() {
    int savings;
    cout << "kitne paise he tere pas: ";
    cin >> savings;
    if (savings>100){
    cout << "Ajj to party hoge\n";    
    }
    else if (savings <20){
        cout << "Chale ja bsdk\n";
    }
    else{
    cout << "Ajj mess me hi khale\n";
}
return 0;
}