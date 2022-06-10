#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector <int> a) {
  // Write your code here
    int n = (int)a.size();
    map<int, int> mp;
    int sum = 0;
    int ans = 0;
    mp[0] = -1;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        if(mp[sum]) {
//             cout << "printing : " << i << " " << sum << " " << mp[sum] << endl;
            ans = max(ans, i - mp[sum]);
        }
        else {
            mp[sum] = i;
        }        
    }
    return ans;
}