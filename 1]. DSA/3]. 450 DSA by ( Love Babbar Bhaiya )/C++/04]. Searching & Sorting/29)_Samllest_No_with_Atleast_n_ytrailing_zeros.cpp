int trailingZeroes(int N)
    {
        // Write Your Code here
        int cnt=0;int p=5;
        while((N/p)>0){
            cnt+= (N/p);
            p*=5;
        }
        return cnt;
    }
