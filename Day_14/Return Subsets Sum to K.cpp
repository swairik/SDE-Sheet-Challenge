vector<vector<int>> findSubsetsThatSumToK(vector<int> a, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    
    for(int i = 0; i < (1 << n); i++) {
        vector<int> temp;
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if(i & (1 << j)) {
                sum += a[j];
                temp.push_back(a[j]);
            }
        }
        if(sum == k) {
            ans.push_back(temp);
        }
    }
    
    return ans;
}