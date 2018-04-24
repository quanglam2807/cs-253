#include "exercise6.hpp"

int main() {
    /* Exercise 6: Online game store */
    /* Create the inventory file object */
    ifstream inventoryFileContent("data/exercise6_inventory.txt");
    if (inventoryFileContent.fail()) {
        cout << "ERROR: Could not open the inventory file" << endl;
        exit(1);
    }
    /* Create the state sales tax file object */
    ifstream statesFileContent("data/exercise6_stateTaxRates.txt");
    if (statesFileContent.fail()) {
        cout << "ERROR: Could not open the tax rate file" << endl;
        exit(1);
    }
    /* Create the cart file object */
    ofstream cartFileContent("build/exercise6_cart.txt");
    if (cartFileContent.fail()) {
        cout << "ERROR: Could not open the cart file" << endl;
        exit(1);
    }
    cout << "Reading state information" << endl;

    vector<State> states;
    readStates(statesFileContent, states);
    cout << "Read " << states.size() << " state(s) from the file" << endl;

    vector<Game> games;
    readInventory(inventoryFileContent, games);
    cout << "Read " << games.size() << " games(s) from the file" << endl;

    vector<GameInCart> cart;
    char ans = 'y';
    
    string myState;

    do {
        /*
        * Display the inventory
        * Ask user to enter the game numer
        * Ask user to enter the number of copies
        * Keep asking if the uer wants to buy another one
        * Don't crash if the user enters bogus numbers
        * */

        displayInventory(games);

        cout << "Which game would you like to buy (0 to skip)?" << endl;
        
        int gameId = 0;
        int copies = 0;

        gameId = readANumber(0, games.size());
        if (gameId > 0) {
            cout << "How many copies of " << games[gameId - 1].title << " would you like to buy?" << endl;
            copies = readANumber(0, 10000);

            GameInCart game;
            game.title = games[gameId - 1].title;
            game.publisher = games[gameId - 1].publisher;
            game.platform = games[gameId - 1].platform;
            game.releaseYear = games[gameId - 1].releaseYear;
            game.price = games[gameId - 1].price;
            game.copies = copies;

            cart.push_back(game);
        }

        cout << "Do you want to buy more game (y/n): ";
        cin >> ans;

        if (ans != 'y') {
            // Read state
            char okState = 'n';
            do {
                cout << "Please enter your state's two-letter code: ";
                cin >> myState;

                for (State s: states) {
                    if (s.code == myState) {
                        okState = 'y';
                        break;
                    }
                }
            } while (okState == 'n');
        }
    } while (ans == 'y');
    
    double salesTax = 0;
    
    readState(states, myState, salesTax);

    cout << "Sales tax is " << setprecision(2) << fixed << salesTax << "%" << endl;

    displayCart(cart, salesTax, cartFileContent);

    inventoryFileContent.close();
    statesFileContent.close();
    cartFileContent.close();

    return 0;
}
