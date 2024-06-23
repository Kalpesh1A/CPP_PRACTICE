#include <iostream>

int main() {
    int decimalNumber = n; // Change this to your desired decimal number 'n'

    if (decimalNumber == 0) {
        return 0; // No set bits found, return 0
    } else {
        int position = 0;
        int bitPosition = 1;

        while (bitPosition <= decimalNumber) {
            if (decimalNumber & bitPosition) {
                position = bitPosition;
            }
            bitPosition <<= 1;
        }

        return position; // Return the position of the rightmost set bit
    }
}
