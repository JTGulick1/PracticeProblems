#include <iostream>
#include <string>
using namespace std;

string flipword(string word) {
    string nw;
    for (int i = 0; i < word.size() + 1; i++)
    {
        nw.push_back(word[word.size() - i]);
    }
    return nw;
};

string flipsen(string sentence) {
    string ns;
    string word = " ";
    word += sentence; sentence = ""; sentence += word; word = "";
    reverse(sentence.begin(), sentence.end());
    for (int i = 0; i < sentence.size(); i++)
    {
        word.push_back(sentence[i]);
        if (sentence[i] == ' ')
        {
            word = flipword(word);
            ns += word;
            word = "";
        }
    }
    return ns;
};

int main(int argc, char* argv[]) {

    string sentence = "enter sentence here";
    string ns = "";
    ns = flipsen(sentence);
    cout << ns;
}