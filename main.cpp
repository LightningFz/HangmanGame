#include <iostream>
#include <vector>
#include "hangman_functions.h"
using namespace std;

int main(){
    greet();

    //var
    string codeword = "codingcleverly";
    string answer = "______________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < 7)
    {
        display_misses(misses);
        display_status(incorrect, answer);

        cout<<"\n\nEnter your guess:";
        cin>>letter;
    }
    

    return 0;
}