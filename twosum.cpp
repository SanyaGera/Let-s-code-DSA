//stdout the index of the pair of numbers whose sum is equal to the given target (0-based indexing)
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a{1,5,3,7,8};
    int target=12;
    unordered_map<int,int>mp;

   
    for(int i=0;i<a.size();i++){
        if(mp.find(target-a[i])!=mp.end())
        {
            cout<<mp[target-a[i]]<<" "<<i<<endl;
            return 0;
        }
        mp[a[i]]=i;
    }
    cout<<-1;

}