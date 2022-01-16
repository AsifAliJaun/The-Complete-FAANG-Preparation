int wordBreak(string a, vector<string> &b) {
        //code here
       int n=a.size();
       unordered_set<string> s;
       vector<bool> dp(n+1,false);
       for(int i=0;i<b.size();i++){
           s.insert(b[i]);
       }
       dp[0]=true;
       for(int i=1;i<=n;i++){
           for(int j=i-1;j>=0;j--){
              if(dp[j]==true &&
              s.find(a.substr(j,i-j))!=s.end()){
                dp[i]=true;
                break;
              }
           }
       }
       return dp[n];
    }