vector<int> duplicates(int arr[], int size)
{
    int freq[size] = {0};
    vector<int> res;
    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2)
            res.push_back(arr[i]);
    }
    if (res.empty())
        return {-1};
    sort(res.begin(), res.end());
    return res;
}
