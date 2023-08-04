class Solution{
public:
     void Reverse(stack<int> &St){
        stack<int> temp;
        while(St.empty()!=1){
            int fl = St.top();
            St.pop();
            temp.push(fl);
        }
        St=temp;
    }
};
