#include <iostream>
#include <string>
#include "Favorites.h"
#include "FavoritesList.h"
using namespace std;



FavoritesList::FavoritesList()
{
    numFavorites = 0;
}

void FavoritesList::addFavorites()
{
    int i;
    beers[numFavorites].getFavoritesInput();
    for (i = 0; i < numFavorites; i++)
    {
        if (beers[numFavorites] == beers[i])
        {
            cout << "Please try again. You've already listed this beer as being your favorite" << endl;
            numFavorites--;
        }
    }
    numFavorites++;

}

void FavoritesList::showFavorites()
{
    int i;
    for (i = 0; i < numFavorites; i++)
    {
        cout << beers[i];

    }
    cout << "Total number of favorite beers is " << numFavorites << "." << endl;

}
FavoritesList::~FavoritesList() {

}
