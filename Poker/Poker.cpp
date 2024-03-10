#include <string>
#include <iostream>
#include <vector>

using namespace std;
const int DECK_SIZE = 52;
const int NUM_SUITS = 4;
const int SIZE_SUIT = 13;
string nameFace(int num);

enum Suit
{
    club, diamond, heart, spade
};

string suit2string(Suit st);
int main()
{
    cout << "Welcome to cards\n";
    
    struct Card
    {
        int num;
        Suit suit;
        string name;
    };

    vector<Card> Deck;

    for (int suit = club; suit <= spade; suit++)
    {
        for (int num = 1; num <= SIZE_SUIT; num++)
        {
            Card card;
            card.num = num+1;
            if (nameFace(num) == "99")
            {
                card.name = std::to_string(num+1);
            }
            else card.name = nameFace(num);
            card.suit = static_cast<Suit>(suit);
            Deck.push_back(card);
        }
    }
    
    return 0;
}

string nameFace(int num)
{
    if (num == 10 || num == 23 || num == 36 || num == 49)
        return "Jack";
    if (num == 11 || num == 24 || num == 37 || num == 50)
        return "Queen";
    if (num == 12 || num == 25 || num == 38 || num == 51)
        return "King";
    if (num == 13 || num == 26 || num == 39 || num == 52)
        return "Ace";
    if(true)
        return "99";
}

string suit2string(Suit st)
{
    switch (st) {
    case 0:
        return "clubs";
    case 1:
        return "diamonds";
    case 2:
        return "hearts";
    case 3:
        return "spades";
    }
}

