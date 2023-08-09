#include <iostream>
#include <string>
using namespace std;
string needle = "abcabcfabf";
int next1[10]={0};


void getNext(int *next,const string &s){
    int j = -1;
    next[0] = j;
    for (int i = 1; i < s.size(); i++)
    {
        char ch = s[i];
        while (j >= 0 && s[i] != s[j+1])
        {
            j = next[j];
        }

        if (s[i] == s[j+1])
        {
            j++;
        }

        next[i] = j;
        
        
    }
    
}
int main(){

    getNext(next1,needle);
    return 0;
}