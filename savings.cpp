#include<iostream>
using namespace std;
int main() {
    int savings;
    cout << "kitne paise he tere pas: ";
    cin >> savings;
    if (savings>=100){
        if (savings >= 1000){
            cout << "Chalte he bahar ghumne\n";
        }   else{    
            cout << "Thode or save karle\n";
        }    
    }
    else if (savings <=20){
        cout << "Chale ja bsdk\n";
    }
    else{
    cout << "Ajj mess me hi khale\n";
}
if (savings%2==0){
    cout << "Even Number";
} else cout << "Odd Number";
return 0;
}