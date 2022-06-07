#include <bits/stdc++.h> 
int findDuplicate(vector<int> &a, int n){
	// Write your code here.
    for(int i = 0; i < n; i++) {
        while(a[i] != i) {
            if(a[a[i]] == a[i])    return a[i];
            swap(a[i], a[a[i]]);
        }
    }
    return -1;
}
