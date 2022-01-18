bool isPossible(int mid,int arr[], int n, int m){
        int student=0, pages=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid) return false;
            
            if(pages+arr[i] > mid){
                student++;
                pages=arr[i];
            }
            else {
                pages+=arr[i];
            }
        }
        
        if(student<m){
            return true;
        }
        return false; 
    }
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int s=arr[0],e=0,ans=-1;
        for(int i=0;i<n;i++){
            e+=arr[i];
            s=min(s,arr[i]);
        }
        
        while(s<=e){
            int mid=(s+e)>>1;
            if(isPossible(mid,arr,n,m)){
                ans=mid;
                e=mid-1;
            }
            else {
                s=mid+1;
            }
        }
        return s;
    }