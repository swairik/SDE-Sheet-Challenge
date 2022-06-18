#include<bits/stdc++.h>

static bool cmp(vector<int>a, vector<int>b)
{
	if(a[1]>b[1])
		return true;
	else
		return false;
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
	sort(jobs.begin(),jobs.end(),cmp);
	int n=jobs.size();
	int maxi=jobs[0][0];
	for(int i=0;i<n;i++)
	{
		maxi=max(maxi,jobs[i][0]);
	}
	int slot[maxi+1];
	for(int i=0;i<=maxi;i++)
	{
		slot[i]=-1;
	}
	
	int profit=0,count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=jobs[i][0];j>0;j--)
		{
			if(slot[j]==-1)
			{
			profit=profit+jobs[i][1];
			count++;
			slot[j]=i;
			break;
			}
		}
	}
	return profit;
}