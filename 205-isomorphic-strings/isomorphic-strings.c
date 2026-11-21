#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {
    // Arrays to store ASCII character mappings initialized to 0
    int map_s_to_t[256] = {0};
    int map_t_to_s[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c1 = s[i];
        unsigned char c2 = t[i];

        // If neither character has been mapped yet, establish the mapping
        if (map_s_to_t[c1] == 0 && map_t_to_s[c2] == 0) {
            map_s_to_t[c1] = c2;
            map_t_to_s[c2] = c1;
        } 
        // Otherwise, verify that the existing mapping matches the current pair
        else if (map_s_to_t[c1] != c2 || map_t_to_s[c2] != c1) {
            return false;
        }
    }

    return true;
}