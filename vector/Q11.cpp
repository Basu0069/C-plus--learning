Q You hv to print the total number of words in a string without calclucationg spaces oki 



#include<bits/stdc++.h>
using namespace std;

int countWords( string &sentence){
    stringstream ss(sentence);
    string word;
    vector<string> words;
    
    while(ss >> word){
        words.push_back(word);
    }
    
    return words.size();
}


int main(){
    
    string sentence;
    getline(cin,sentence);
    
    int wordCount = countWords(sentence);
    cout<< wordCount << endl;
    
    
    return 0;
}


Hello my name is basu slathia   as input 

