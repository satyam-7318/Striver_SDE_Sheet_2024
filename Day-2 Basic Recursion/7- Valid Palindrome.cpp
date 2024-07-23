// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.

//   Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.
 

// Constraints:

// 1 <= s.length <= 2 * 105
// s consists only of printable ASCII characters.





class Solution {
public:

    bool recurse(string ans, int i, int n){

        if(i>=n/2)
            return true;

        if(ans[i] != ans[n-i-1])
            return false;

        return recurse(ans,i+1,n);


    }

    bool isPalindrome(string s) {
        string ans = "";
        for(auto ch : s){
            if(isalpha(ch))
                ans += tolower(ch);
            if(ch>='0' && ch<='9')
                ans += ch;
        }

        return recurse(ans,0,ans.size());
    }
};
