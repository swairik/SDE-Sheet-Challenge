int removeDuplicates(vector<int> &a, int n) {
	// Write your code here.
    const int INF = 1e9 + 7;
    
    int ans = 0;
    int prev = -INF;
    
    for(int i = 0; i < n; i++) {
        if(a[i] == prev)    continue;
        ans++;
        prev = a[i];
    }
    
    
    return ans;
}