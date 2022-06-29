void insert(stack<int> &st, int v) {
    if(st.empty() || (!st.empty() && st.top() <= v)) {
        st.push(v);
        return;
    }
    int curr = st.top();
    st.pop();
    insert(st, v);
    st.push(curr);
}

void sort(stack<int> &st) {
    if(st.size() <= 1) {
        return;
    }
    int curr = st.top();
    st.pop();
    sort(st);
    insert(st, curr);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
    sort(stack);
}