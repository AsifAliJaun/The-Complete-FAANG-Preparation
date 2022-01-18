#include <iostream>
#include <stdlib.h>
using namespace std;
int search(int *arr,int n,int x,int k){
    
    for(int i=0;i<n;){
        if(arr[i]==x){
            return i;
        }
        i+=max(1,abs(x-arr[i])/k);
    }
    return -1;

}
int main() {
    int arr[] = {2, 4, 5, 7, 7, 6};
    int x = 6;
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Element " << x  << " is present at index "
         << search(arr, n, x, k);
}