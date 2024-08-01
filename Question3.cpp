#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a paragraph "<<endl;
    string para;
    getline(cin,para);
    int n = para.length();

    unordered_map<string, int> freq_mp;
    string word = "";
    for(int i = 0; i<=n; ++i){
        if(i==n or para[i]==' ' or para[i]=='.'){
            if(word.length()){
                freq_mp[word] += 1;
            }
            word  = "";
        }
        else word += para[i];
    }

    for(auto it : freq_mp){
        cout<<it.first<<" occurs "<<it.second<<" times\n";
    }

    return 0;
}