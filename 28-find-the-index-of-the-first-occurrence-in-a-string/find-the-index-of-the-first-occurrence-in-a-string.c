#include <string.h>

int strStr(char* haystack, char* needle) {
    int hLen = strlen(haystack);
    int nLen = strlen(needle);

    // If needle is longer than haystack, it cannot be a substring
    if (nLen > hLen) {
        return -1;
    }

    // Iterate through each possible starting index in haystack
    for (int i = 0; i <= hLen - nLen; i++) {
        int j = 0;
        // Check if characters match starting from index i
        while (j < nLen && haystack[i + j] == needle[j]) {
            j++;
        }
        // If we matched the entire needle, return the starting index
        if (j == nLen) {
            return i;
        }
    }

    return -1;
}