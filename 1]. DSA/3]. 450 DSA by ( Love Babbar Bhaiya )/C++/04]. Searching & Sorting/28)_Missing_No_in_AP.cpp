int findMissing(int arr[], int n) {
        // code here
        int s=0,e=n-1,d=(arr[n-1]-arr[0])/n;
        
        while(s<=e){
            int mid=(s+e)/2;
            if((arr[mid]-arr[0])/d == mid){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return arr[e]+d;
    }