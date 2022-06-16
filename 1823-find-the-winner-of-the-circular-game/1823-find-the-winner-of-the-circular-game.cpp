class Solution {
public:
    int findTheWinner(int n, int k) {
        int count=n;

		// vector<int> vec;
		int vec[n+1];
		for(int i=0;i<n+1;i++)
		{
			vec[i]=0;
		}

		int ref = 0;
		while(count>1)
		{
			for(int i=0;i<n && count>1;i++ )
			{
				if(vec[i] != 1){
					ref++;
				}

				if(ref == k)
				{
					vec[i] = 1;
					count--;
					ref = 0;
				}
				//cout<<"count - "<<count<<" "<<i<<endl;
			}
		}
		int ans;
		for(int i=0;i<n;i++)
		{
			if(vec[i]==0)
				ans=i+1;
			//cout<<vec[i]<<endl;
		}

		return ans;
    }
};