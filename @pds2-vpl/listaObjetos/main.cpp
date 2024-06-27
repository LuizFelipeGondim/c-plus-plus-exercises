#include <iostream>
#include <list>
#include <algorithm>

class Game {
  public:
    void showInfo();
    static int getAmount();

    Game() : gameId(nextId++) {
      amountGames++;
    }

    Game(int id) : gameId(id) {
      amountGames++;
    }

    ~Game() {
      amountGames--;
    }
   
  private:
    static int nextId;
    static int amountGames;
    int gameId;
    
};

int Game::amountGames = 0;
int Game::nextId = 1;

int main() {

  std::list<Game> games;
  std::list<Game>::iterator it;
  char option;

  while ((std::cin >> option) && option != 'E') {
    switch (option) {
      case 'A':
        games.emplace_back();
        games.back().showInfo();
      break;

      case 'C':
        int id;
        std::cin >> id;

        if (id < 0) {
          games.emplace_front(id);
          games.front().showInfo();
        } else {
          std::cout << "ERRO" << std::endl;
        }
      break;

      case 'R':
        if (!games.empty()) {
          it = games.begin();
          it->showInfo();
          games.erase(it);
        } else {
          std::cout << "ERRO" << std::endl;
        }
      break;

      case 'N':
        std::cout << Game::getAmount() << std::endl; 
      break;

      case 'P':
        int position;
        std::cin >> position;
        position--;

        if (position >= 0 && position < Game::getAmount()){
          it = games.begin();
          std::advance(it, position);
          it->showInfo();
        } else {
          std::cout << "ERRO" << std::endl;
        }

      break;

      case 'L':
        for (Game& game : games)
          game.showInfo();
      break;
    }
  }

  return 0;
}

void Game::showInfo() {
  std::cout << gameId << " " << this << std::endl; 
}

int Game::getAmount() {
  return amountGames;
}