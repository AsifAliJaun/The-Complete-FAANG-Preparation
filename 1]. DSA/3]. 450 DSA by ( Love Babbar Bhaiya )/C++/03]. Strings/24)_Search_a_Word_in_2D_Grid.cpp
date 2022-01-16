bool isFound(vector<vector<char>>grid,int i,int j,int* x,int* y,string word){
        if(grid[i][j]!=word[0]){
            return false;
        }        
        
        int len=word.length(), m=grid.size(), n=grid[0].size();
        
        for(int dir=0;dir<8;dir++){
            int l,newi=i+x[dir],newj=j+y[dir];
            
            for(l=1;l<len;l++){
                
                if(newi>=m || newi<0 || newj>=n || newj<0 || (grid[newi][newj]!=word[l])){
                    break;
                }
                
                newi+=x[dir]; newj+=y[dir];
            }
            
            if(len==l){
                return true;
            }
        }
        return false;
    }
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    int x[]={-1,-1,-1,0,0,1,1,1};
        int y[]={-1,0,1,-1,1,-1,0,1};
        
	    vector<vector<int>> answer;
	    int m=grid.size(), n=grid[0].size();
	    
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(isFound(grid,i,j,x,y,word)){
	                
	                answer.push_back({i,j});
	            }
	        }
	    }
	    return answer;
	}