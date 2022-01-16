string findSubString(string str)
    {
        // Your code goes here   
        int i=0,j=0,count=0;
        set<char> set;
        unordered_map<char,int> m;
        
        for(int i=0;i<str.length();i++){
            set.insert(str[i]);
        }
        int n=set.size();
        int startIndex=-1,minLen=INT_MAX;
        
        while(i<=j && j<str.length()){
            char ch=str[j++];
            if(m[ch]!=0){
                m[ch]++;
            }
            else {
                m[ch]++;
                count++;
            }
            if(count==n){
                startIndex=i;
                minLen=min(minLen,j-i);
            }
            
            while(count==n){
                char tmp=str[i++];
                if(m[tmp]>1){
                    startIndex=i;
                    minLen=min(minLen,j-i);
                    m[tmp]--;
                }
                else {
                    m[tmp]--;
                    count--;
                }
            }
            
        }
        
        return str.substr(startIndex,minLen);
    }