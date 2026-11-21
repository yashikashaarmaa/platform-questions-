void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;      // Pointer for the last valid element in nums1
    int j = n - 1;      // Pointer for the last element in nums2
    int k = m + n - 1;  // Pointer for the last position in nums1

    // Compare elements from the end and place the larger one at index k
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If any elements remain in nums2, copy them over
    // (No need to check nums1, as its remaining elements are already in place)
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}