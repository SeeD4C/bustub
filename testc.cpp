#include <bitset>
#include <iostream>

int main() {

    std::bitset<8> bset(19); // Example bitset initialized with the value 18
    for (size_t i = 8; i >= 0; i--) {
        if (bset[i] == 1) {
            //return i + 1; // Return position of leftmost one (1-based index)
            std::cout << 8 - i << std::endl;
        }
    }
    std::cout << bset << std::endl;

    return 0; // Return 0 if no bits are set
}