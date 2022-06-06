#include <bits/stdc++.h> 

void setZeros(vector<vector<int>> &a)
{
    int n = (int)a.size();
    int m = (int)a[0].size();
    set<int> rows, cols;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == 0) {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }
    for(auto x : rows) {
        for(int j = 0; j < m; j++) {
            a[x][j] = 0;
        }
    }
    for(auto x : cols) {
        for(int i = 0; i < n ;i++) {
            a[i][x] = 0;
        }
    }
}