#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &a, int n) {
    // Write your code here.
    unordered_map<int, int> mp;
    for(auto x : a) {
        mp[x]++;
    }
    int ans = 0;
    for(auto x : a) {
        if(mp.find(x - 1) == mp.end()) {
            int k = x;
            int len = 1;
            while(mp.find(k + 1) != mp.end()) {
                k++, len++;
            }
            ans = max(ans, len);
        }
    }
    return ans;
}