#include <iostream>
#include "vector"
using namespace std;

int main() {

    vector<string> v;

    string word = "";
    string input;

    getline(cin, input);

    for (int i = 0; i < input.length(); ++i) {

        word += input[i];

        if (isspace(input[i])){
            word.pop_back();
            v.push_back(word);
            word = "";
        }

    }

    v.push_back(word);

    for (int i = 0; i < v.size(); ++i) {

        cout << "\"" << v[i] << "\"" << endl;

    }

    return 0;
}