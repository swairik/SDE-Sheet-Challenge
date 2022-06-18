vector<int> subsetSum(vector<int> &a)
{
    // Write your code here.
    int n = (int)a.size();
    
    vector<int> ans;
    
    for(int i = 0; i < (1 << n); i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
//             cout << "printing : " << i << " " << j << " " << a[i] << endl;
            if(i & (1 << j)) {
                sum += a[j];
            }
        }
        ans.push_back(sum);
    }
    sort(ans.begin(), ans.end());
    return ans;
}