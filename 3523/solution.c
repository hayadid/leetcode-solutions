int maximumPossibleSize(int* nums, int numsSize) {

    int prevLargest = nums[0];
    int maxSize = numsSize;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] >= prevLargest) {
            prevLargest = nums[i];
        } else {
            maxSize--;
        }
    } 

    return maxSize;
}