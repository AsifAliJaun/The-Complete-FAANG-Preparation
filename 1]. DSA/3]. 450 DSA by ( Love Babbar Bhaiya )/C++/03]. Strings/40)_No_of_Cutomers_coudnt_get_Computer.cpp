int runCustomerSimulation(int n, string str){
    int cnt=0; set<char> s;

    for(int i=0;i<str.length();i++){
        char ch=str[i];

        if(s.find(ch)==s.end()){
            s.insert(ch);
            if(s.size()>n){
                cnt++;
            }
        }
        else {
            s.erase(ch);
        }
    }
    return cnt;
}
