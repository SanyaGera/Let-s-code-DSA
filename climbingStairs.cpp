// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 #include<bits/stdc++.h>
 using namespace std;
 
  int fib(int n,vector<int>&dp){
        if(n==1 )
            return 1;
          if(n==2)
              return 2;
       
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=fib(n-1,dp)+fib(n-2,dp);
        
    }
    int climbStairs(int n) {
             vector<int>dp(n+1,-1);
        return fib(n,dp);
    }
    int main(){
        int n=4;
        cout<<climbStairs(n);
    }