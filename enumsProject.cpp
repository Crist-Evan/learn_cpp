#include <iostream>
using namespace std;

enum suits
{
    Jack = 10,
    Queen = 10,
    King = 10,
    As = 11,
};

int main()
{
    int card;
    suits spade;

    switch (spade)
    {
    case Jack:
        card = 10;
        break;
    case Queen:
        card = 10;
        break;
    case King:
        card = 10;
        break;
    case As:
        card = 11;
        break;
    }

    return 0;
}