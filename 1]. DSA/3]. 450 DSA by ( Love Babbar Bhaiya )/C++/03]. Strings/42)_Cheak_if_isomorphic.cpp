bool areIsomorphic(string s1, string s2)
    {
        
        // Your code here
        if(s1.length()!=s2.length()){
            return false;
        }
        
        unordered_map<char,char> m;
        unordered_set<char> prev;
        
        for(int i=0;i<s1.length();i++){
            if(m.find(s1[i])==m.end()){
                if(prev.find(s1[i])!=prev.end()){
                    return false;
                }
                else {
                    m[s1[i]]=s2[i];
                    prev.insert(s2[i]);
                }
            }
            else {
                if(m[s1[i]] != s2[i])
                    return false;
            }
            
        }
        return true;
        
    }