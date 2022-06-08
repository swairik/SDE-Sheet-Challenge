#include <bits/stdc++.h> 
int findMajorityElement(int a[], int n) {
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        mp[a[i]]++;
    }
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        int x = itr->first;
        int y = itr->second;
        if(y > n / 2)    return x;
    }
    return -1;
}