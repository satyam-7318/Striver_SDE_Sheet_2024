/*

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-2^31 <= x <= 2^31 - 1

*/


class Solution {
public:
    long long reverse(long long x) {

        long long num=x;
        if(x<0)
            x=0-x;
        long long temp=0;
        while(x!=0){
            temp=10*temp+x%10;
            x=x/10;
        }
        
        if(temp>INT_MAX || temp<INT_MIN)
            return 0;
        
        if(num>0)
            return temp;
        else
            return 0-temp;
        
        
    }
};
