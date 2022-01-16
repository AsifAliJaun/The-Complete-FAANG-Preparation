string removeConsecutiveCharacter(string s)
    {
        // code here.
        string ans;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            while(s[i+1]==ch && i<s.length()-1){
                i++;
            }
            ans+=ch;
        }
        return ans;
    }