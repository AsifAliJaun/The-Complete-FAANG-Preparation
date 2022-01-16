string longestCommonPrefix(vector<string>& arr) {
        string ans="";
        int mini=arr[0].length();
        for(auto x: arr){
            if(mini>x.length()){
                mini=x.length();
            }
        }
        
        for(int i=0;i<mini;i++){
            char ch=arr[0][i];
            for(int j=1;j<arr.size();j++){
                if(arr[j][i]!=ch){
                    return ans;
                }
            }
            ans+=ch;
        }
        return ans;
    }