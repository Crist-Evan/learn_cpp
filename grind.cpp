#include <iostream>
#include <random>
#include <ctime>
#include <conio.h>
using namespace std;

unsigned seed = static_cast<unsigned>(time(0));
mt19937 generator(seed);
uniform_real_distribution<float> distribution(0.0, 1.0);

struct itemData {
    float itemId;
    string itemName;
};

struct inventoryItem {
    itemData itemData;
    int amount;
};

float randGen() {
    return distribution(generator);
}

string grindReward(float randSeed) {
    string grindItem;
    if (randSeed > 0.4) {
        return grindItem = "Monster Leather";
    } else if (randSeed > 0.1) {
        return grindItem = "Silver Coin";
    } else {
        return grindItem = "Diamond Ore";
    }
}

int main() {

    int listMenu;
    string grindItem;
    float randSeed;

    do {
        system("CLS");
        cout << "Choose:\n1. grind 1x\n2. grind 10x\n\n--> ";
        cin >> listMenu;

        if (listMenu == 1) {
            randSeed = randGen();
            cout << grindReward(randSeed) << endl;
            getch();
        } else if (listMenu == 2) {
            for (int i = 0; i < 10; i++) {
                randSeed = randGen();
                cout << grindReward(randSeed) << endl;
            }
            getch();
        }
    } while (listMenu != 0);

    return 0;
}