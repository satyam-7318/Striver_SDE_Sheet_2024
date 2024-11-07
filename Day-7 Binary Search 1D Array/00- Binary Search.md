- Aim of Binary search is to always eliminate either the left or right because of sorted nature of array.

- In some ques (first and last occurence), we need to run bs for two sorted parts (bsf ---> from 0 to index and bsl ---> from index to n-1)

- Mostly in rotated array questions, we need to look up about sorted part of array and according to it, we need to move further. In some rotated questions, we need to carry some potential answer with us ( Min element in rotated sorted array)






##
## 11. Single Element in a Sorted Array

          0  1  2  3  4  5  6  7  8  9  10      (Indexes)

         [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6]      (Array)

We can see one thing,

- left part of single element --> (even, odd)  
- right part of single element --> (odd, even)

If we are at even index and our duplicate is at right odd index, single elemnt is on right part.

If we are at odd index and our duplicate is at right even index, single elemnt is on left part.

Now we can easily do elimination of parts that is aim of BS.





## 
## 12. Find Peak Element 

