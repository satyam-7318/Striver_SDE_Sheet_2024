/*

Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Examples
Example 1:
Input:N = 153
Output:True
Explanation: 13+53+33 = 1 + 125 + 27 = 153
  
Example 2:
Input:N = 371
Output: True
Explanation: 33+53+13 = 27 + 343 + 1 = 371

*/

                            
#include <bits/stdc++.h> 
using namespace std;

bool isArmstrong(int num) {
    
    int k = to_string(num).length();
    int sum = 0;
    int n = num;
  
    while(n > 0){
        int ld = n % 10;
        sum += pow(ld, k); 
        n = n / 10;
    }
    
    return sum == num ? true : false;
}

int main() {
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
                            
                        
