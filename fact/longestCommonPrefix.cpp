// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string pre=strs[0];
        for(int i=0;i<strs.size();i++){
            for(int j=0;j<strs[i].size();j++){
                if(pre[j]!=strs[i][j]){
                    pre=pre.substr(0,j);
                    break;
                }
            }
        }
        return pre;
    }
int main(){
vector<string>str{"flower","flow","flight"};
cout<<longestCommonPrefix(str);
}