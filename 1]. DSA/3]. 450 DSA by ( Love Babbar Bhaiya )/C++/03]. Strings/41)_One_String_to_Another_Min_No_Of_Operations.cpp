#include <iostream>
using namespace std;
int minOps(string &a, string &b){
    int n=a.length(),cnt=0;
    for(int i=n-1,j=n-1; i>=0;){
        
        while(a[i]!=b[j] && i>=0){
            i--;
            cnt++;
        }
        if(a[i]==b[j]){
            i--;j--;
        }
    }
    return cnt;
}
int main() {
    string A = "EACBD";
    string B = "EABCD";
    cout << "Minimum number of operations "
            "required is " << minOps(A, B);
}