#include <string.h>

int lengthOfLastWord(char* s) {
    int length = 0;
    int i = strlen(s) - 1;

    // 1. Skip any trailing spaces at the end of the string
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // 2. Count the characters of the last word until a space or start of string
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}