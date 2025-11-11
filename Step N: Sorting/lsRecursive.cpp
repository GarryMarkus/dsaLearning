int linearSearchRecursive(const vector<int>& v, int key, int i) {
    if (i == v.size())
        return -1;
    if (v[i] == key)
        return i;
    return linearSearchRecursive(v, key, i + 1);
}
