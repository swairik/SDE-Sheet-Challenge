#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& a, vector<int>& b, int m, int n) {
	// Write your code here.
    vector<int> ans;
    int i = 0, j = 0;
    while(i < m && j < n) {
        if(a[i] <= b[j]) {
            ans.push_back(a[i++]);
        }
        else {
            ans.push_back(b[j++]);
        }
    }
    while(i < m)    ans.push_back(a[i++]);
    while(j < n)    ans.push_back(b[j++]);
    return ans;
}