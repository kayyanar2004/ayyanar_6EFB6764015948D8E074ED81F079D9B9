#include <iostream>

class Player {
public:
    void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

class Batsman : public Player {
public:
    void play() {
        std::cout << "The batsman is batting." << std::endl;
    }
};

class Bowler : public Player {
public:
    void play() {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    Player player;
    Batsman batsman;
    Bowler bowler;

    // Call the play() method for each object
    std::cout << "Player: ";
    player.play();

    std::cout << "Batsman: ";
    batsman.play();

    std::cout << "Bowler: ";
    bowler.play();

    return 0;
}
