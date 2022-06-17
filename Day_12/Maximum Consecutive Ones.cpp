int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i = 0;
    int j = 0;
    int mx = 0;
    while(j<n) {                   
        if(arr[j] == 0) k--;
        if(k<0) {
           while(arr[i] != 0) i++;
           i++;
           k++;
        }
        else {
           mx = max(mx, j - i + 1);
        }
        j++;
    }
    return mx;
}
