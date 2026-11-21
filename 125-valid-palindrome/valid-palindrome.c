#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        // Move the left pointer forward until it hits an alphanumeric character
        while (left < right && !isalnum((unsigned char)s[left])) {
            left++;
        }
        // Move the right pointer backward until it hits an alphanumeric character
        while (left < right && !isalnum((unsigned char)s[right])) {
            right--;
        }

        // Compare characters case-insensitively
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}