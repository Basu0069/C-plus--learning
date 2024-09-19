Q how to calculate the total number of words in a string using vector 

// stringstream case very important:





#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    vector<string> words;
    stringstream ss(inputString);
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    cout << "Number of words: " << words.size() << endl;

    return 0;
}


