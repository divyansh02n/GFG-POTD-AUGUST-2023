class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        string rev = "";
        for(int i=str.size()-1; i>=0; i--){
           rev += str[i]; 
        }
        return rev;
    }
};
