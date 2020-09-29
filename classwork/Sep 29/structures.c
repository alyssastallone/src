#include <stdio.h>

struct card{
    char *face;   //define pointer face
    char *suit;   //define pointer suit
};

int main(void)
{
    struct card aCard;  //define one struct card variable

    aCard.face = "Ace";
    aCard.suit = "Spades";

    struct card *cardPtr = &aCard;  //assign address of aCard to cardPtr

    printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit, 
        cardPtr->)
        

}