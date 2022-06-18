#include <bits/stdc++.h>

vector<vector<int>> uniqueSubsets(int n, vector<int> &a)
{
    // Write your code here.
    sort(a.begin(), a.end());
    set<vector<int>> st;
    
    for(int i = 0; i < (1 << n); i++) {
        vector<int> temp;
        for(int j = 0; j < n; j++) {
            if(i & (1 << j)) {
                temp.push_back(a[j]);
            }
        }
        st.insert(temp);
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}