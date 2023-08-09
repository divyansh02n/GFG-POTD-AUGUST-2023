class Solution{
public: 
    long long int largestPrimeFactor(int n){
        // code here
        for(long long int i=2; i*i<=n; i++){
            if(n%i == 0){
                while(n>i and n%i==0) n/=i;
            }
        }
        return n;
    }
};
