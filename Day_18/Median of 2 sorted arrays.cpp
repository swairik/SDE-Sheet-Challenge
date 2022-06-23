#include <bits/stdc++.h>
double median(vector<int> a, vector<int> b){
    if(b.size()<a.size()){
        return median(b,a);
    }
    int n=a.size();
    int m=b.size();
    
    int low=0;
    int high=n;
    
    while(low<=high){
        int p1=(low+high)/2;       // partition 1
        int p2=((n+m+1)/2)-p1;   // partition 2
        
        int l1=p1==0 ? INT_MIN : a[p1-1];
        int l2=p2==0 ? INT_MIN : b[p2-1];
        
        int r1=p1==n ? INT_MAX : a[p1];
        int r2=p2==m ? INT_MAX : b[p2];
        
        if(l1<=r2 && l2<=r1){
            if((n+m)%2==0){
                return (double)(((double)max(l1,l2)+(double)min(r1,r2))/2);
            }
            else{
                return max(l1,l2);
            }
        }
        else if(l1>r2){
            high=p1-1;
        }
        else{
            low=p1+1;
        }
    }
    return 0;
}