#include <bits/stdc++.h> 
int uniqueSubstrings(string a)
{
    //Write your code here
    int n = (int)a.size();
    set<char> st;
    int ans = 0;
    int l = 0, r = 0;
    while(r < n) {
        if(!st.insert(a[r]).second) {
            while(a[l] != a[r]) {
                st.erase(a[l]);
//                 cout << "erasing : " << a[l] << " " << a[r] << endl;
                l++;
            }
            l++;
//             cout << "a[l] = " << a[l] << endl;
            cout << endl;
        }
        ans = max(ans, r - l + 1);
//         cout << "printing : " << l << " " << r << " " << ans << endl;
        r++;
    }
    
    return ans;
}