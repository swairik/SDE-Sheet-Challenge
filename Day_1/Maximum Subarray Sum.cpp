#include <bits/stdc++.h> 
long long maxSubarraySum(int a[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long ans = 0LL;
    long long temp = 0LL;
    for(int i = 0; i < n; i++) {
        temp = max(temp + a[i], a[i] * 1LL);
        ans = max(ans, temp);
    }
    return ans;
}