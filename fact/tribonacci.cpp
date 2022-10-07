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