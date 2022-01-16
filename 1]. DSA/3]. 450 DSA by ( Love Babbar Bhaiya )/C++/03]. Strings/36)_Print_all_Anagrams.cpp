vector<vector<string> > Anagrams(vector<string>& v) {
        //code 
        vector<vector<string> > ans; int k=0;
        
        vector<string> tmp=v;
        for(auto &x: tmp){
            sort(x.begin(),x.end());
        }
        
        unordered_map<string,vector<int> > m;
        for(int i=0;i<tmp.size();i++){
            m[tmp[i]].push_back(i);
        }
        
        for(auto x: m){
            vector<string> t;
            for(auto y: x.second){
                t.push_back(v[y]);
            }
            ans.push_back(t);
        }
        return ans;
    }