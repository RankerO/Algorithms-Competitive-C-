```c++
int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int n=nums.size();
        for(auto c:nums)sum+=c;
        sum-=x;
        if(sum==0)return n;
        int mxSize=-1,i=0,j=0,temp=0;
        while(j<n)
        {
            temp+=nums[j];
            if(temp<sum)
            {
                j++;
            }
            else if(temp==sum)
            {
                mxSize=max(mxSize,j-i+1);
                j++;
            }
            else
            {
                while(temp>sum && i<j)
                {
                    temp-=nums[i];
                    i++;
                }
                if(temp==sum)
                {
                mxSize=max(mxSize,j-i+1);
                }
               j++;
            }
        }
        if(mxSize==-1)return -1;
        return n-mxSize;
    }
```
