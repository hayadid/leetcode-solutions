/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int* sumZero(int n, int* returnSize) {
    *returnSize = n;

    int* arr = (int*)malloc(sizeof(int) * n);

    int currentDiff = n / 2;

    int index = 0;

    // If n is odd, loop won't reach middle of array, keeping it zero
    for (; index < n/2; index++) {
        arr[index] = currentDiff;
        arr[n - 1 - index] = -currentDiff;
        currentDiff--;
    }

    if (n % 2 == 1) {
        arr[index] = 0;
    }

    return arr;
}