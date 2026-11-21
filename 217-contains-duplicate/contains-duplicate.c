#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int int_a = *((int*)a);
    int int_b = *((int*)b);
    
    // Avoid (int_a - int_b) to prevent integer overflow with large constraints (-10^9 to 10^9)
    if (int_a == int_b) return 0;
    return (int_a < int_b) ? -1 : 1;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }
    
    return false;
}