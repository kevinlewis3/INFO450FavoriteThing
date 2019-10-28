#include <iostream>
#include <string>
#include "Favorites.h"
#include "FavoritesList.h"
using namespace std;

//Working Half
int main()
{
    FavoritesList list;
    char cont = 'y';

    //Using a do/while loop to collect information from the user
    do {
        cout << "Please enter the details about your favorite Microbreweries beer " << list.numFavorites + 1 << "." << endl;
        list.addFavorites();
        cout << "Do you have another beer you'd like to add? Y/N: ";
        cin >> cont;
        cin.ignore();

    }while (cont == 'y' || cont =='Y');

    cout << endl << "You provided it and now I'm listing it. Here's the list of your favorite beers:" << endl;
    list.showFavorites();

    return 0;



}
