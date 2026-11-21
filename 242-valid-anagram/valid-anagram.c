#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    // Anagrams must have the exact same length
    int lenS = strlen(s);
    int lenT = strlen(t);
    if (lenS != lenT) {
        return false;
    }

    // Frequency array for the 26 lowercase English letters
    int count[26] = {0};

    // Increment count for characters in s, decrement for characters in t
    for (int i = 0; i < lenS; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // If all counts return to 0, both strings have identical character frequencies
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}