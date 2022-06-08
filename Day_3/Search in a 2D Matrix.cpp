#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector <vector<int>> &a, int m, int n, int t) {
    // Write your code here.
    int l = 0, r = m * n;
    while(l < r) {
        int mid = (l + r) / 2;
        int i = mid / n;
        int j = mid % n;
        if(a[i][j] == t)    return true;
        if(a[i][j] < t)    l = mid + 1;
        else    r = mid;
    }
    return false;
}