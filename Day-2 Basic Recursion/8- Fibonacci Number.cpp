class Solution {
public:
//recursive solution 
    int fib(int n) {
        if(n<0)
            return 0;
        if(n==0 || n==1)
            return n;
        
        return fib(n-1) + fib(n-2);
    }
};
