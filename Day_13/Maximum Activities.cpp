#include <bits/stdc++.h>

// bool comp(pair<int, int> a, pair<int, int> b) {
//     if(a.first != b.first)    return a.first < b.first;
//     return a.second < b.second;
// }

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n = (int)start.size();
    vector<pair<int, int>> a;
    for(int i = 0; i < n; i++) {
        a.push_back({finish[i], start[i]});
    }
    sort(a.begin(), a.end());
    int end = 0;
    int ans = 0;
    for(auto x : a) {
//         cout << "printing : " << x.second << " " << x.first << endl;
        if(x.second >= end) {
            ans++;
            end = x.first;
        }
    }
    
    return ans;
}