#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string getKeyword(string filename, int keywordNumber);

bool checkWord(string keyword, string word, string& incorrectLetters);

int main() {
  int keywordNumber, cont = 0;
  string keyword, word, incorrectLetters = "";
  bool won = false;

  cin >> keywordNumber;
  keyword = getKeyword("palavras.txt", keywordNumber);


  while (cont < 5) {
    cin >> word;
    won = checkWord(keyword, word, incorrectLetters);

    cout << " (";
    for(char c : incorrectLetters)
      cout << c;

    cout << ")" << endl;

    if(won)
      break;
    
    cont++;
  }

  won ? cout << "GANHOU!" : cout << "PERDEU! " << keyword;

  return 0;
}

bool checkWord(string keyword, string word, string& incorrectLetters) {
  bool isCharacter;
  int correctLetter = 0;
  int charPosition, validPosition;

  for(int i = 0; i < 5; i++) {
    isCharacter = false;
    charPosition = keyword.find(word[i]);
    validPosition = charPosition != string::npos;

    if(validPosition && i == charPosition) {
      cout << word[i];
      isCharacter = true;
      correctLetter++;
    } else if (validPosition && i != charPosition) {
      char character = tolower(word[i]);
      cout << character;
      isCharacter = true;
    } 

    if(!isCharacter) {
      cout << '*';

      if(incorrectLetters.find(word[i]) == string::npos)
        incorrectLetters.push_back(word[i]);
    }
  }

  return (correctLetter == 5) ? true : false;

}

string getKeyword(string filename, int keywordNumber) {
  int numWords;
  string keyword;

  ifstream in(filename);

  in >> numWords;
  in.ignore(); //Pular linha


  for (int i = 0; i < numWords; i++) {
    if (keywordNumber - 1 == i) {
      getline(in, keyword);
      break;
    }

    in.ignore(256, '\n');
  }

  in.close();

  return keyword;

}

//Versao da funcao getKeyword que deu certo no vpl
/*
string getKeyword(string filename, int keywordNumber) {
  int numWords;
  string keyword;

  ifstream in(filename);

  in >> numWords;

  for (int i = 0; i <= numWords; i++) {
    if (keywordNumber == i) {
      getline(in, keyword);
      break;
    }

    in.ignore(256, '\n');
  }

  in.close();

  return keyword;

*/