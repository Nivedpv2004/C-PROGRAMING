#include<bits/stdc++.h>
using namespace std;
    int main() {
        vector<int>& height = [0,1,0,2,1,0,1,3,2,1,2,1]
        int n = height.size();
        
        vector<int> prefix(n);
        vector<int> suffix(n);
       
        int maxP=0;
        int maxS=0;
        
        for(int i=0;i<n;i++)
        {
            maxP = max(maxP , height[i]);
            prefix[i] = maxP;
            
            maxS = max(maxS,height[n-1-i]);
            suffix[n-1-i] = maxS;
        }
        
        //formula
        int ans=0;
        
        for(int i=0;i<n;i++){
        ans += min(suffix[i],prefix[i]) - height[i];   
        }
        cout<<ans<<endl;
    }
};