void nextPermutation(vector<int>& nums) {
        int i,j,n=nums.size();
        
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(j=n-1;j>i;j--){
            if(nums[j]>nums[i]){
                break;
            }
        }
        swap(nums[i],nums[j]);
        reverse(nums.begin()+i+1,nums.end());
        return;
    
    }