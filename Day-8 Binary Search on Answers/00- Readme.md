##
## 1. Sqaure root of n

- We have to find square root of n.
- If n is not perfect square, return floor value.
- So range would be 1 to n. We have to find mid and if mid * mid == n ... return mid
- If mid * mid < n => We need to store mid in a variable "answer". This could be our potential answer and low = mid + 1;
- If mid * mid > n => then high = mid - 1;



##
## 2. nth root of m

- We have to find nth root of n.
- So range would be 1 to m. We have to find mid and if mid * mid *.....*mid (n times) == m ... return mid
- While finding mid * mid *.....*mid (n times), we need to take care of overflow otherwise there could be error in answer
- Ifmid * mid *.....*mid (n times) < m => low = mid + 1;
- If mid * mid *.....*mid (n times) > m => then high = mid - 1;
