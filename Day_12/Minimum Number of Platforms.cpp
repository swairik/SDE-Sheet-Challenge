int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    vector<int> times(2400, 0);
    
    for(int i = 0; i < n; i++) {
        times[at[i]]++;
        times[dt[i] + 1]--;
    }
    int ans = 0;
    for(int i = 1; i < 2400; i++) {
        times[i] = times[i - 1] + times[i];
        ans = max(ans, times[i]);
    }
    return ans;
}