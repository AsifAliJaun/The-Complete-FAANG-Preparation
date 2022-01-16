int countRev (string s)
{
    // your code here
    int open=0,close=0;
    stack<int> st;
    
    if(s.length()&1){
        return -1;
    }
    
    for(auto ch: s){
        if(ch=='{'){
            st.push(ch);
            open++;
        }
        else if(ch=='}' && !st.empty() && st.top()=='{'){
            st.pop();
            open--;
        }
        else {
            st.push(ch);
            close++;
        }
    }
    
    if(open&1) open=(open/2)+1;
    else open=open/2;
    if(close&1) close=(close/2)+1;
    else close=close/2;
    
    return open+close;
}
