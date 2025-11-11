int binarySearchRecursive(const vector<int>& arr, int low, int high, int target) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            return binarySearchRecursive(arr, low, mid - 1, target);
        else
            return binarySearchRecursive(arr, mid + 1, high, target);
    }
    return -1;
}
    