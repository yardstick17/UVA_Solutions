#include<bits/stdc++.h>
using namespace std;

int LIS(vector<int> &A,int N)
{
	vector<int> ans;
	for(int i=0;i<N;i++)
	{
		auto it = upper_bound(ans.begin(),ans.end(),A[i]);
		if(it == ans.end())
			ans.push_back(A[i]);
		else
			*it = A[i];
	}
	
	for(int i=0;i<ans.size();i++)
    	cout<<ans[i]<<" ";
	cout<<endl;
	return ans.size();
}

int main(void)
{
	int A[] = {6,8,1,3,9,4,5,2,7,-1,11};
	int N = sizeof(A)/sizeof(A[0]);
	
	vector<int> V(A,A+N);
	cout<<LIS(V,N)<<endl;
	return 0;
}
