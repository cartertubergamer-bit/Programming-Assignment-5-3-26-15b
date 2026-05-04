// Carter Cox
// 5/3/26
// CIS 1202 Assignment STL 15b

#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T half(T value) {
    return value / 2;
}

// integer version with rounding rules
int half(int value) {
    return static_cast<int>(round(value / 2.0));
}

int main() {
    cout << "Assignment 15b - Templates\n" << endl;

    cout << "half(5) = " << half(5) << endl;
    cout << "half(6) = " << half(6) << endl;

    cout << "half(5.0) = " << half(5.0) << endl;
    cout << "half(6.0) = " << half(6.0) << endl;

    cout << "half(5.5f) = " << half(5.5f) << endl;
    cout << "half(6.7f) = " << half(6.7f) << endl;

    return 0;
}
   
