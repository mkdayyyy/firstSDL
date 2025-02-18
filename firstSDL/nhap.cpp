#include <iostream>
#include <math.h>
#include <valarray>
using namespace std;

double triple(float number) {
    number *= 3;
    return number;
}
int main() {
    float input = 2.5;
    cout << triple(input);
    return 0;
}
