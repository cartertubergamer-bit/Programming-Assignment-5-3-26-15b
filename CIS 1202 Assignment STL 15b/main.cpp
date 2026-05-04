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
    
    return 0;
}
   
