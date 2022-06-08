#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &a)
{
    // Write your code here.
    int n = (int)a.size();
    vector<int> ans;
    map<int, int> mp;
    for(auto x : a)    mp[x]++;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        int x = itr -> first;
        int y = itr -> second;
        if(y > n / 3)    ans.push_back(x);
    }
    return ans;
}


// OTher Solution

#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &nums)
{
        const int MAX=INT_MAX;
    // Write your code here.
        int num1=MAX,num2=MAX,c1=0,c2=0;
        for(auto x:nums){
            if(x==num1) c1++;
            else if(x==num2)    c2++;
            else if(c1==0){
                num1=x;
                c1=1;
            }
            else if(c2==0){
                num2=x;
                c2=1;
            }
            else{
                c1--,c2--;
            }
        }
        c1=0,c2=0;
        for(auto x:nums){
            if(x==num1) c1++;
            if(x==num2) c2++;
        }
        vector<int> ans;
        int n=(int)nums.size();
        if(c1>n/3)  ans.push_back(num1);
        if(c2>n/3)  ans.push_back(num2);
        return ans;
}