// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left_border = 0;
    int right_border = size - 1;
    int count = 0;
    int mid;
    while (left_border != right_border) {
        mid = (left_border + right_border) / 2;
        if (arr[mid] == value) {
            count++;
            int mid1 = mid - 1;
            while (arr[mid1] == value) {
                count++;
                mid1--;
            }
            int mid2 = mid + 1;
            while (arr[mid2] == value) {
                count++;
                mid2++;
            }
            left_border = right_border;
        }
        if (arr[mid] > value)
            right_border = mid;
        if (arr[mid] < value)
            left_border = mid + 1;
    }
    return count;
}
