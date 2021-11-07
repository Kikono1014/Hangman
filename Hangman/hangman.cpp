#include<iostream>


using namespace std;

string art(int id) {

    string art_array[10] = {"\n\
        \n\
      \n\
      \n\
      \n\
      \n\
        _________\n\
        |_______|\n\
    \n",
    "\n\
    \n\
      \n\
      \n\
      \n\
      \n\
     /|\\   _________\n\
    /_|_\\  |_______|\n\
    \n",

    "\n\
      |\n\
      |\n\
      |\n\
      |\n\
      |\n\
     /|\\   _________\n\
    /_|_\\  |_______|\n\
    \n",
    "\n\
     _|_________\n\
      |\n\
      |\n\
      |\n\
      |\n\
      |\n\
     /|\\   _________\n\
    /_|_\\  |_______|\n\
    \n",
    "\n\
     _|_________\n\
      |\n\
      |     (°_°)\n\
      |\n\
      |\n\
      |\n\
     /|\\  _________\n\
    /_|_\\ |_______|\n\
    \n",
    "\n\
     _|_________\n\
      |\n\
      |     (°_°)\n\
      |       |\n\
      |       |\n\
      |\n\
     /|\\  _________\n\
    /_|_\\ |_______|\n\
    \n",
    "\n\
     _|_________\n\
      |\n\
      |     (°_°)\n\
      |      /|\\\n\
      |     / | \\\n\
      |\n\
     /|\\  _________\n\
    /_|_\\ |_______|\n\
    \n",
    "\n\
     _|_________\n\
      |\n\
      |     (°_°)\n\
      |      /|\\\n\
      |     / | \\\n\
      |      /\n\
     /|\\  __/______\n\
    /_|_\\ |_______|\n\
    \n",
    "\n\
     _|_________\n\
      |\n\
      |     (°_°)\n\
      |      /|\\\n\
      |     / | \\\n\
      |      / \\\n\
     /|\\  __/___\\__\n\
    /_|_\\ |_______|\n\
    \n",
    "\n\
     _|_________\n\
      |       |\n\
      |     (*_*)\n\
      |      /|\\\n\
      |     / | \\\n\
      |      / \\\n\
      |     /   \\\n\
     /|\\  _________\n\
    /_|_\\ |_______|\n\
    \n"};
    return art_array[id];
}


const char* generateWord(){
    return "something";
}


int main()
{
    setlocale(LC_ALL, "ru");

    int step = 0;
    char letter = ' ';
    string word = generateWord();
    string guessing_word = "";

    for (int i = 1; i <= word.size(); i++){
        guessing_word += "_";
    }

    while (true){
        cout << "                             " << guessing_word;
        cout << art(step);

        cin >> letter;
        string new_guessing_word = guessing_word;
        for (int i = 0; i <= word.size(); i++){
            if (letter == word[i]){
                new_guessing_word[i] = letter;
            }
        }
        if(guessing_word == new_guessing_word){
            step++;
        }
        guessing_word = new_guessing_word;

        if (guessing_word == word){
            system("clear");
            cout << guessing_word;
            cout << "\nYOU WIN\n";
            break;
        } else if (step == 9){
            system("clear");
            cout << art(step);
            cout << "\nYOU LOSE\n";
            break;
        }else{
            system("clear");
        }

    }

    return 0;
}
