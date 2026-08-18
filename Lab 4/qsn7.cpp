#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    Player(string name, int h, int s, int lvl) {
        playerName = name;
        health = h;
        score = s;
        level = lvl;
    }

    friend class GameManager;
};

class GameManager {
public:
    void displayPlayerDetails(const Player& p) {
        cout << "Player Details" << endl;
        cout << "Name   : " << p.playerName << endl;
        cout << "Health : " << p.health << endl;
        cout << "Score  : " << p.score << endl;
        cout << "Level  : " << p.level << endl;
    }

    void checkAlive(const Player& p) {
        cout << "Status Check" << endl;
        if (p.health > 0) {
            cout << p.playerName << " is Alive!" << endl;
        } else {
            cout << p.playerName << " is Defeated (Health is 0 or less)." << endl;
        }
    }

    void displayLevelAndScore(const Player& p) {
        cout << "Current Progress" << endl;
        cout << "Level : " << p.level << endl;
        cout << "Score : " << p.score << endl;
    }
};

int main() {
    string name;
    int health, score, level;

    cout << "Enter Player Name: ";
    getline(cin, name);

    cout << "Enter Health: ";
    cin >> health;

    cout << "Enter Score: ";
    cin >> score;

    cout << "Enter Level: ";
    cin >> level;

    Player player1(name, health, score, level);
    GameManager gm;

    gm.displayPlayerDetails(player1);
    gm.checkAlive(player1);
    gm.displayLevelAndScore(player1);

    return 0;
}