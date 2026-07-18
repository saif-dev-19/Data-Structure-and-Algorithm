#include<bits/stdc++.h>
using namespace std;

bool is_anagram(string s,string t){

    if(s.length() != t.length()){
        return false;
    }

    int freq[26] = {0};

    for(int i =0; i<s.length(); i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }

    for( int i =0; i<26; i++)
        cout << freq[i];
    
    cout << "---" <<endl;

    for(int i = 0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }


    return true;

}


int main(){
    string s = "anagram";
    string t = "nagaram";


    if(is_anagram(s,t))
        cout << "Anagram";
    else
        cout << "Not Anagram";
        
}



