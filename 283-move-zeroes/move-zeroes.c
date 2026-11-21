void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    // Fill the remaining positions with 0
    while (insertPos < numsSize) {
        nums[insertPos] = 0;
        insertPos++;
    }
}