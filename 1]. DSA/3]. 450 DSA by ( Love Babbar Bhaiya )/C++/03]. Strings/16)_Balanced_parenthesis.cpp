bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        int n=x.length();
        for(auto ch: x){
            if(ch==')'){
                if(!s.empty() && s.top()=='('){
                    s.pop();
                }
                else return false;
            }
            else if(ch=='}'){
                if(!s.empty() && s.top()=='{'){
                    s.pop();
                }
                else return false;
            }
            else if(ch==']'){
                if(!s.empty() && s.top()=='['){
                    s.pop();
                }
                else return false;
            }
            else {
                s.push(ch);
            }
        }
        if(!s.empty()){
            return false;
        }
        else return true;
    }