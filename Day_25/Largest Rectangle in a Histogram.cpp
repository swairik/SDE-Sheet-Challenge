#include <bits/stdc++.h>

int largestRectangle(vector <int> &a) {
    // Write your code here.
    int n = (int)a.size();
    stack<int> st;
    st.push(-1);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int currHeight = a[i];
        while(st.top() != -1 && a[st.top()] > currHeight) {
            int height = a[st.top()];
            st.pop();
            int width = i - st.top() - 1;
            ans = max(ans, height * width);
        }
        st.push(i);
    }
    while(st.top() != -1) {
        int h = a[st.top()];
        st.pop();
        int w = n - st.top() - 1;
        ans = max(ans, h * w);
    }
    return ans;
}