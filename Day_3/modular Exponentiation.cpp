#include <bits/stdc++.h>
int fn(int a, int b, int m) {
    int ans = 1;
    while(b) {
        long long temp;
        if(b & 1) {
            temp = ans * 1LL;
            temp = (temp * a) % m;
            ans = (int)temp;
        }
        b >>= 1;
        temp = a * 1LL;
        temp = (temp * temp) % m;
        a = temp;
    }
    return ans;
}

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    return fn(x, n, m);
}