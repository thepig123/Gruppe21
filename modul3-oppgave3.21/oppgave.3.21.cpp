#include <iostream>

using namespace std;
unsigned long long collatzConjecture(unsigned long long num);

int main() {
    unsigned long long number;
    unsigned long long iterNum = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << number << " ";

    while (number != 1) {
        number = collatzConjecture(number);
        cout << number << " ";

        iterNum++;
    }

    cout << endl << "It took " << iterNum << " iterations to reach 1" << endl;

    return 0;
} 

unsigned long long collatzConjecture(unsigned long long num) {
    if (num % 2 == 0) {
        return num / 2;
    }
    else {
        return 3 * num + 1;
    }
}
