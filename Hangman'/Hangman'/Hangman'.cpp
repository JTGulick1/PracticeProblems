#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    string word = "";
    string cword = "";
    char letter = 'a';
    int lives = 5;
    int points = 0;
    bool foundletter = false;
    bool gameover = false;
    cin >> word;
    cout << "Guess the word: " << endl;
    cword = word;
    for (int i = 0; i < cword.size(); i++)
    {
        cword[i] = '_';
    }
    while (gameover != true)
    {
        cout << cword << endl;
        cin >> letter;
        for (int i = 0; i < word.size(); i++)
        {
            if (letter == word[i])
            {
                cout << "Letter: " << letter << endl;
                cword[i] = letter;
                foundletter = true;
                points++;
            }
        }
        if (foundletter == false)
        {
            lives--;
            cout << "Letter: " << letter << " is not found!" << endl;
            cout << "You have lost a life... Total lives: " << lives << endl;
        }
        foundletter = false;
        if (points == word.size())
        {
            cout << endl << endl;
            gameover = true;
            cout << "You Win!!!" << endl;
        }
        if (lives <= 0)
        {
            cout << endl << endl;
            gameover = true;
            cout << "You Lose!!!" << endl;
        }
    }
    return 0;
}