
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int i = 0, j = 0;
        long long sum = 0;
        bool present = false;
        while(j < n)
        {
            sum = sum + arr[j];
            if(sum > s)
            {
                while(sum > s)
                {
                    sum = sum - arr[i];
                    i++;
                }
            }
            if(sum == s && sum != 0)
            {
                present = true;
                break;
            }
            j++;
        }
        if(present == false)
            return {-1};
        return {i+1,j+1};
    }
};
