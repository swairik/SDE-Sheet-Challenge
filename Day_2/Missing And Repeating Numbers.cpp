#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	// Write your code here 
	int r = -1;
    for(int i = 0; i < n && r == -1; i++) {
        while(a[i] != i + 1) {
            if(a[a[i] - 1] == a[i]) {
                r = a[i];
                break;
            }
            swap(a[i], a[a[i] - 1]);
        }
    }
    int sum = accumulate(a.begin(), a.end(), 0);
    int actualSum = (n * (n + 1)) / 2;
    return {actualSum - (sum - r), r};
}
