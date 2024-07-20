/*

Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

Example 1:
Input:N = 2
Output:True
Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).

Example 2:
Input:N =10
Output: False
Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.

*/

                                
#include <bits/stdc++.h> 
using namespace std;


bool checkPrime(int n){ 

  
    int cnt = 0;

    for(int i = 1; i <= sqrt(n); i++){ 

        if(n % i == 0){ 

            
            cnt = cnt + 1;

            if(n / i != i){
                cnt = cnt + 1;
            }
        }
    }

   
    if(cnt == 2){
        return true;
    }
    else{ 
        return false; 
    }
}


int main() {
    int n = 1483;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
                                
                            
