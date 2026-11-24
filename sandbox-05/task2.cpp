#include <cstdint>
#include <iostream>

// Перевертає біти в байті: біт 7 -> біт 0, біт 6 -> біт 1 і т. д.
std::uint8_t mirror(std::uint8_t b) {
    std::uint8_t result = 0;
    for (int i = 0; i < 8; ++i) {
        std::uint8_t bit = (b >> i) & 1;   // беремо біт i
        result = result | (bit << (7 - i)); // кладемо його на місце 7 - i
    }
    return result;
}

int main() {
    // (int) потрібен, бо uint8_t друкується як символ, а не як число
    std::cout << std::hex
              << (int)mirror(0x01) << ' '
              << (int)mirror(0xA0) << ' '
              << (int)mirror(0x3C) << '\n';
}