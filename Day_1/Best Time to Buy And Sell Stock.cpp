#include <bits/stdc++.h> 
int maximumProfit(vector<int> &a){
    // Write your code here.
    int ans = 0;
    int b = INT_MAX;
    for(auto x : a) {
        b = min(b, x);
        ans = max(ans, x - b);
    }
    
    return ans;
}