void permute(string S,int i,int n,vector<string> &ans){
	        if(i==n){
	            ans.push_back(S);
	            return;
	        }    
	        
	        for(int k=i;k<n;k++){
	            swap(S[k],S[i]);
	            permute(S,i+1,n,ans);
	            swap(S[k],S[i]);
	        }
	    }
	
	    
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    permute(S,0,S.length(),ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
