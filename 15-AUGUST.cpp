class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int zeroCount = 0;
        int oneCount = 0;
        int maxZeroCount = 0;
        int i = 0;
        
        while(i < n){
            
            if(a[i]==0) {
                zeroCount++;
                if(maxZeroCount<zeroCount) maxZeroCount=zeroCount;
            }
            
            else {
                if(zeroCount!=0) zeroCount--;
                oneCount++;
            }
            
            i++;
        }
        
        return (maxZeroCount+oneCount);
        
    }
};
