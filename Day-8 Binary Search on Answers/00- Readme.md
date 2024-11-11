##
## 1. Sqaure root of n

- We have to find square root of n.
- If n is not perfect square, return floor value.
- So range would be 1 to n. We have to find mid and if mid * mid == n ... return n
- If mid * mid < n => We need to store mid in a variable "answer". This could be our potential answer and low = mid + 1;
- If mid * mid > n => then high = mid - 1;
