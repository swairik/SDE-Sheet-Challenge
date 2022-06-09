#include <bits/stdc++.h> 
int reversePairs(vector<int> &a, int n){
	// Write your code here.	
    int ans = 0;
    
    vector<int> temp = a;
//     for(int i = n - 1; i >= 0; i--) {
//         temp.push_back(a[i]);
//     }
    
    sort(temp.begin(), temp.end());
    
//     for(auto x : temp)    cout << x << " ";
//     cout << endl;
    
    for(int i = 0; i < n; i++) {
        int val = (a[i] / 2) + (a[i] & 1);
        int pos = lower_bound(temp.begin(), temp.end(), val) - temp.begin();
//         cout << "printing : " << i << " " << val << " " << pos << endl;
        ans += pos;
//         cout << "before : ";
//         for(auto x : temp)    cout << x << " ";
//         cout << endl;
        temp.erase(lower_bound(temp.begin(), temp.end(), a[i]));
//         cout << "after : ";
//         for(auto x : temp)    cout << x << " ";
//         cout << endl;
    }
    
    
    return ans;
}