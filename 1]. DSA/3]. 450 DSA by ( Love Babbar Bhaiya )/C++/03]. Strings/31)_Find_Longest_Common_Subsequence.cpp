int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int dp[x+1][y+1]={0};
        for(int i=0;i<=x;i++) dp[i][0]=0;
        for(int i=0;i<=y;i++) dp[0][i]=0;
        
        for(int i=1;i<x+1;i++){
            for(int j=1;j<y+1;j++){
                int ans=0;
                if(s1[i-1]==s2[j-1]){
                    ans=dp[i-1][j-1]+1;
                }
                else {
                    ans=max(dp[i-1][j],dp[i][j-1]);
                }
                dp[i][j]=ans;
            }
        }
        return dp[x][y];
    }