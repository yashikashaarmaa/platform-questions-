int findNumbers(int* nums, int numsSize) {
    int evenDigitCount = 0;

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        int digits = 0;

        // Count the number of digits by dividing by 10
        while (num > 0) {
            num /= 10;
            digits++;
        }

        // Check if the digit count is even
        if (digits % 2 == 0) {
            evenDigitCount++;
        }
    }

    return evenDigitCount;
}