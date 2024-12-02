##
## 1. Sqaure root of n

- We have to find square root of n.
- If n is not perfect square, return floor value.
- So range would be 1 to n. We have to find mid and if mid * mid == n ... return mid
- If mid * mid < n => We need to store mid in a variable "answer". This could be our potential answer and low = mid + 1;
- If mid * mid > n => then high = mid - 1;



##
## 2. nth root of m

- We have to find nth root of m.
- So range would be 1 to m. We have to find mid and if mid * mid *.....*mid (n times) == m ... return mid
- While finding mid * mid *.....*mid (n times), we need to take care of overflow otherwise there could be error in answer
- Ifmid * mid *.....*mid (n times) < m => low = mid + 1;
- If mid * mid *.....*mid (n times) > m => then high = mid - 1;


##
## 3. Koko eating bananas

- We have to find number of bananas.
- So range would be 1 to max element. We have to find mid and if mid satisfies condition, it would be our potential answer.
- high would be mid - 1 else low would be mid + 1
