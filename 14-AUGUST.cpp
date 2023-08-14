class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int>ans(2,0);

        int val=0;

        for(int it:nums){

            val^=it;

        }

        int r=(val&(val-1))^val;

        for(int i:nums){

            if(i&r){

                ans[0]^=i;

            }

            else{

                ans[1]^=i;

            }

        }

        if(ans[0]>ans[1]){

            swap(ans[0],ans[1]);

        }

        return ans;
    }
};
