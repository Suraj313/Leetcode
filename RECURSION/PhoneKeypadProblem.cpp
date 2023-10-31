#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
 void solve(string digit, string output, int index,  string mapping[] ) {
        
        //base case
        if(index >= digit.length()) {
            for( auto it : output) cout<<it<<" ";
            cout<<endl;
            return;
        }
        
        int number = digit[index] - '0';
        string value = mapping[number];
        
        for(int i=0; i<value.length(); i++) {
            output.push_back(value[i]);
            solve(digit, output, index+1,  mapping);
            output.pop_back();
        }
        
    }
    int main(){
        string digit = "23";
        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
        solve(digit, output, index, mapping);
        return 0;
    }
/* OUTPUT->a d 
           a e 
           a f 
           b d 
           b e 
           b f 
           c d 
           c e 
           c f */