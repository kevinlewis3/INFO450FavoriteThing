#pragma once
#include <iostream>
#include <string>
#include "Favorites.h"
using namespace std;

class FavoritesList
{
private:
    Favorites beers [100];
public:
    int numFavorites;
    FavoritesList();
    void addFavorites();
    void showFavorites();
    ~FavoritesList();
};


