#include <iostream>

// Перетворює велику латинську літеру на малу, решту лишає як є.
char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return (char)(c - 'A' + 'a');
    }
    return c;
}

bool is_palindrome(const char* s) {
    int n = 0;
    while (s[n] != '\0') {
        ++n;
    }
    // Два індекси йдуть назустріч: з початку і з кінця.
    for (int i = 0; i < n / 2; ++i) {
        if (to_lower(s[i]) != to_lower(s[n - 1 - i])) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << is_palindrome("Level") << ' '
              << is_palindrome("Radar") << ' '
              << is_palindrome("hello") << '\n';
}