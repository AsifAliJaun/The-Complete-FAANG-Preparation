#include <iostream>
#include <cstring>
using namespace std;

string keypad[]={
    "2","22","222",
    "3","33","333",
    "4","44","444",
    "5","55","555",
    "6","66","666",
    "7","77","777","7777",
    "8","88","888",
    "9","99","999","9999"
    };

string stToNum(string s){
    string ans="";
    for(auto ch: s){
        if(ch==' '){
            ans+='0';
            continue;
        }
        int digit=ch-'A';
        ans+=keypad[digit];

    }
    return ans;
}


int main() {
    string s;
    getline(cin,s);
    cout<<stToNum(s)<<endl;
}