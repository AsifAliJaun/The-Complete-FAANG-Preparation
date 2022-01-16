map<char,int> m;
    int romanToDecimal(string &str) {
        // code here
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        
        int sum=0;
        int n=str.length();
        for(int i=0;i<n-1;i++){
            if(m[str[i]]>=m[str[i+1]]){
                sum+=m[str[i]];
            }
            else {
                sum-=m[str[i]];
            }
        }
        sum+=m[str[n-1]];
        return sum;
    }