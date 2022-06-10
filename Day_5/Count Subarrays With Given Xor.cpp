#include <bits/stdc++.h> 
int subarraysXor(vector<int> &a, int x)
{
    //    Write your code here.
    int n = (int)a.size();
    map<int, int> mp;
    int val = 0;
    int ans = 0;
    mp[0] = 1;
    for(int i = 0; i < n; i++) {
        val = val xor a[i];
        int t = val xor x;
//         if(mp[t]) {
//             ans += mp[t];
//         }
        ans += mp[t];
        mp[val]++;
    }
    return ans;
}