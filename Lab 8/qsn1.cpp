#include <iostream>
using namespace std;
class Character{
    public:
    virtual void attack(){}
};
class Warrior: public Character{
    int strength;
    public:
    Warrior(int s){
        strength=s;
    }
    void attack() override{
        cout<<"Warrior Damage:"<<20+2*strength<<endl;
    }
};
class Archer : public Character {
    int agility;
    public:
    Archer(int a) {
        agility = a;
    }

    void attack() override {
        cout << "Archer Damage: " << 15 + 3 * agility << endl;
    }
};
int main() {
    int strength, agility;
    cin >> strength >> agility;

    Warrior w(strength);
    Archer a(agility);

    Character *c;

    c = &w;
    c->attack();

    c = &a;
    c->attack();

    return 0;
}