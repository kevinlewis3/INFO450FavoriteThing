#include <iostream>
#include <string>
#include "Favorites.h"
#include "FavoritesList.h"
using namespace std;

int main()
{
    FavoritesList list;
    char cont = 'y';

    //Using a do/while loop to collect information from the user
    do {
        //Asking user for information about their favorite beers.
        cout << "Please enter the details about your favorite Microbreweries beer " << list.numFavorites + 1 << "." << endl;
        list.addFavorites();
        cout << "Do you have another beer you'd like to add? Y/N: ";
        cin >> cont;
        cin.ignore();

    }while (cont == 'y' || cont =='Y'); //If users wants to add another favorite the above code is executed again.

    cout << endl << "You provided it and now I'm listing it. Here's the list of your favorite beers:" << endl;
    //Printing/Displaying list of favorites
    list.showFavorites();

    return 0;



}
