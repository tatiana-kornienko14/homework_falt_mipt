#include <iostream>

enum class Field {
  Free, Nought, Cross
};

enum class GameState {
  Running, Draw, NoughtsWin, CrossesWin
};

class NandCGrid {
  Field grid[3][3];
public:
  Field Get(size_t x, size_t y)const {
    return grid[x][y];
  }

  void Set(size_t x, size_t y, Field f) {
    grid[x][y] = f;
  }

  GameState GetState()const {};
  std::string ToString()const {};
};

class NandCGame {
  NandCGrid m_grid;
  Player& m_player1;
  Player& m_player2;
public:
  NandCGame(Player& pl1, Player& pl2);
  void Run() {}
};

class Player {
public:
  virtual std::pair<size_t, size_t>TakeTurn(const NandCGrid& grid) {}
};

class RealPlayer:public Player {};
class AIPlayer:public Player {};
