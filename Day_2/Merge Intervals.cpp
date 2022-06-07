#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &a)
{
    // Write your code here.
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    
    for(auto x : a) {
        if(ans.empty()) {
            ans.push_back(x);
        }
        else {
            if(ans.back()[1] >= x[0]) {
                auto temp = ans.back();
                ans.pop_back();
                temp[1] = max(temp[1], x[1]);
                ans.push_back(temp);
            }
            else {
                ans.push_back(x);
            }
        }
    }
    
    return ans;
}
