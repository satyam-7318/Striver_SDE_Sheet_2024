- Aim of Binary search is to always eliminate either the left or right because of sorted nature of array.

- In some ques (first and last occurence), we need to run bs for two sorted parts (bsf ---> from 0 to index and bsl ---> from index to n-1)

- Mostly in rotated array questions, we need to look up about sorted part of array and according to it, we need to move further. In some rotated questions, we need to carry some potential answer with us ( Min element in rotated sorted array)

##
## 9 and 10. Minimum Element in a Rotated Sorted Array

- It is sorted hence we can think about BS
- We need to look up sorted part of array and according to it, need to move further
- If we calculate mid, and if nums[mid] >= nums[low] so it means this part is sorted but still we can't say that min element will be in this part
- We will take a potential ans from here and that will be nums[low] and eliminate this half by low = mid + 1
- And if nums[mid] <= nums[high] so it means this part is sorted but still we can't say that min element will be in this part
- We will take a potential ans from here as well and that will be nums[mid] and eliminate this half by high = mid - 1





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
 
- We can see one thing, the design of array will be like this /\ 
- If our mid is in increasing order ( nums[mid] > nums[mid-1] ), i.e. in left part --> our peak is in right side so low = mid + 1;
- If our mid is in decreasing order ( nums[mid] > nums[mid+1] ), i.e. in right part --> our peak is in left side so high = mid - 1;
- And if our mid is our peak, nums[mid] > nums[mid+1] and nums[mid] > nums[mid-1] => return mid asap.
  
Now we can easily do elimination of parts that is aim of BS.


#### Also we can take low = 1 and high = n-2 and we should take care of mid = 0 and mid = n - 1 

