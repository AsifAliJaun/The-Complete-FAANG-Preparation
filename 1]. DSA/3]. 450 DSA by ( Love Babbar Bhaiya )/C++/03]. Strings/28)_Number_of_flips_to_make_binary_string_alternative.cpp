int minFlips (string s)
{
    // your code here
    int cnt1=0,cnt2=0;
    for(int i=0;i<s.length();i++){
        if(i&1){
            if(s[i]!='1') cnt1++;
        }
        else {
            if(s[i]!='0') cnt1++;
        }
        
        if(i&1){
            if(s[i]!='0') cnt2++;
        }
        else {
            if(s[i]!='1') cnt2++;
        }
    }
    
    return min(cnt1,cnt2);
}