#include <iostream>
#include <string>
using namespace std;

struct character
{
    string name;
    int level;
    float xp;
};

void newUser(character &chara, string userName)
{
    chara.name = userName;
    chara.level = 0;
    chara.xp = 0.0;
}

void displayUser(character &chara)
{
    cout << "name: " << chara.name << endl;
    cout << "level: " << chara.level << endl;
    cout << "xp: " << chara.xp << endl;
}

int main()
{

    system("cls");
    character player;
    string name;

    cout << "insert your name: ";
    getline(cin, name);
    newUser(player, name);

    int mainMenu;

    do
    {
        system("cls");
        displayUser(player);
        cout << "==========================\n";

        cout << "1. grind\n0. exit\n\n--> ";
        cin >> mainMenu;

    } while (mainMenu != 0);

    return 0;
}