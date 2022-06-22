#include <bits/stdc++.h>

int uniqueElement(vector<int> a, int n)
{
	// Write your code here
    return accumulate(a.begin(), a.end(), 0, 
                      [&](int a, int b) {
                          return a xor b;
                      });
}
