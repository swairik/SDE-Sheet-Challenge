#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &a, int s){
   // Write your code here.
    map<int, int> mp;
    for(auto x : a)    mp[x]++;
    vector<vector<int>> ans;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        int x = itr -> first;
        int y = itr -> second;
        
        if(mp[x] > 0 && mp[s - x] > 0) {
            int times = mp[x] * mp[s - x];
            if(x == s - x)    times = (mp[x] * (mp[x] - 1)) / 2;
            while(times--) {
                vector<int> temp{x, s - x};
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
                mp[x]--;
                mp[s - x]--;
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}