int findMinimumCoins(int s) 
{
    // Write your code here
    const int INF = 1e9;
    vector<int> coins{1, 2, 5, 10, 20, 50, 100, 500, 1000};
    
    int ans = 0;
    
    for(int i = 8; i >= 0; i--) {
        if(s / coins[i] >= 1) {
            ans += (s / coins[i]);
            s %= coins[i];
        }
        if(!s)    break;
    }
    
    return ans;
    
}
