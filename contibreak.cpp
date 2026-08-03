#include<iostream>
using namespace std;
int main(){
    int day;
    int pocketmoney=300;
    int dailyspending=20;
    for (day=1; day<=40; day++){
        if (pocketmoney>=dailyspending){
             if (day%2==1){
                cout << "Today you cannot go\n";
                continue;
            }
            cout << "You can go today as date is "<<day<<" and you have "<<pocketmoney<<" money left\n";
            pocketmoney=pocketmoney-dailyspending;}
        else {
            cout << "you have no money left\n";
            break;
        }
    }

    return 0;
}


/*
They are laways used in the loops
Continue Statement: Used to skip to new iteration

Break Statement: Used to get out of the loop

*/