#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number of Numbers: ";
    cin >> n;
    
    int pos_count = 0, neg_count = 0, zero_count = 0;
    int pos_sum = 0, neg_sum = 0;
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val > 0) {
            pos_count++;
            pos_sum += val;
        } else if (val < 0) {
            neg_count++;
            neg_sum += val;
        } else {
            zero_count++;
        }
    }
    
    cout << "Number of positive numbers: " << pos_count << endl;
    cout << "Number of negative numbers: " << neg_count << endl;
    cout << "Number of zeros: " << zero_count << endl;
    cout << "Sum of positive numbers: " << pos_sum << endl;
    cout << "Sum of negative numbers: " << neg_sum << endl;
    
    return 0;
}