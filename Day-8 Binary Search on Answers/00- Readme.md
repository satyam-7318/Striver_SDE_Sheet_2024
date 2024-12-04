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


##
## 4. Minimum number of days to make bouquets

- First find max number. At this day, all flowers will have blossomed.
- So range would be 1 to max element. We have to find mid and if mid satisfies condition, it would be our potential answer.
- high would be mid - 1 else low would be mid + 1



##
## 5. Smallest Divisor

- First find max number. 
- So range would be 1 to max element. We have to find mid and if mid satisfies condition, it would be our potential answer.
- high would be mid - 1 else low would be mid + 1




##
## 6. Capacity to ship packages

- First find sum of array that would be high point. 
- So range would be 1 to sum. We have to find mid and if mid satisfies condition, it would be our potential answer.
- high would be mid - 1 else low would be mid + 1





##
## 7. Kth missing positive number
- low would be 0 and high would be last index
- Find mid and with help of mid, find missing number
- If missing < k then low = mid + 1 else high = mid - 1
- return arr[high] + more i.e. high + k + 1








##
## Min(max) or max(min) pattern






##
## 8. Aggressive Cows
- Range would be 1 to max - min considering two cows only. Answer will be lie between them
- Find mid and if we can place all cows with that mid distance, that could be our potential answer.
- then low = mid + 1 and high = mid - 1
