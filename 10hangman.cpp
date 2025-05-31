#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void displayWord(const string& word, const vector<char>& guessed) {
    for (char c : word) {
        if (find(guessed.begin(), guessed.end(), c) != guessed.end()) {
            cout << c << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

bool isWordGuessed(const string& word, const vector<char>& guessed) {
    for (char c : word) {
        if (find(guessed.begin(), guessed.end(), c) == guessed.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    string word = "hangman";
    vector<char> guessedLetters;
    int maxTries = 6;
    int wrongTries = 0;
    char guess;

    cout << "Welcome to Hangman!" << endl;

    while (wrongTries < maxTries) {
        cout << "\nWord: ";
        displayWord(word, guessedLetters);

        cout << "Guess a letter: ";
        cin >> guess;
        guess = tolower(guess);

        if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end()) {
            cout << "You already guessed that letter." << endl;
            continue;
        }

        guessedLetters.push_back(guess);

        if (word.find(guess) == string::npos) {
            wrongTries++;
            cout << "Wrong guess! Tries left: " << maxTries - wrongTries << endl;
        } else {
            cout << "Correct guess!" << endl;
        }

        if (isWordGuessed(word, guessedLetters)) {
            cout << "\nCongratulations! You guessed the word: " << word << endl;
            return 0;
        }
    }

    cout << "\nGame over! The word was: " << word << endl;
    return 0;
}