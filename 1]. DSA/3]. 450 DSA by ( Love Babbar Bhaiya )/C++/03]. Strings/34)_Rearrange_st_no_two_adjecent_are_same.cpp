#include <iostream>
#include <algorithm>

using namespace std;

int rearrangeString(string str)
    {
        sort(str.begin(),str.end());
        int maxi=0;
        //cout<<"str: "<<str<<endl;

        for(int i=0;i<str.length();i++){
            char ch=str[i];
            int cnt=1;
            while(str[i+1]==ch && i<str.length()){
                cnt++;
                i++;
            }
            maxi=max(maxi,cnt);
        }
        //cout<<"maxi: "<<maxi<<endl;

        int spaces=maxi-1;
        int remLetters=str.length()-maxi;
        
        if(spaces<=remLetters){
            return 1;
        }
        else {
            return 0;
        }
    }
int main() {
    string str="geeksforgeeks";
    cout<<rearrangeString(str);
}