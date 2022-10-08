/* The tribonacci series is a generalization of the Fibonacci sequence where each term is the sum of the three preceding terms.

 a(n) = a(n-1) + a(n-2) + a(n-3) 
 with 
 a(0) = a(1) = 0, a(2) = 1.    

 Input : 5
 Output : 0, 0, 1, 1, 2  */

#include<bits/stdc++.h>
   using namespace std;

   int fib(int n,vector<int>&dp){
        if(n<=1)
            return n;
        if(n==2)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=fib(n-1,dp)+fib(n-2,dp)+fib(n-3,dp);
        
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return fib(n,dp);
    }
    int main(){
        int n=10;
        cout<<tribonacci(n);
        return 0;
    }
