// Quang
#include "exercise6.hpp"

/*
 * Implement functions here
 * */

int readANumber(int lower_bound, int upper_bound) {
    int result = lower_bound - 1;
    do {
        cout << "Please enter a number between " << lower_bound << " and " << upper_bound << endl;
        cin >> result;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(__INT_MAX__, '\n');
            result = lower_bound - 1;
            cout << "Try again" << endl;
        }
    } while (result < lower_bound || result > upper_bound);
    cin.clear();
    cin.ignore(__INT_MAX__, '\n');

    return result;
}

void readStates(ifstream &fileIn, vector<State> &states) {
    string line;
    while(getline(fileIn, line)) {
        stringstream linestream(line);

        string code;
        double tax;
        string fullName;

        string taxStr;

        getline(linestream, code, '|');
        getline(linestream, taxStr, '|');
        getline(linestream, fullName, '|');

        tax = ::atof(taxStr.c_str());

        State state;
        state.code = code;
        state.tax = tax;
        state.fullName = fullName;
        states.push_back(state);
    }
}

void readInventory(ifstream &fileIn, vector<Game> &inventory) {
    string line;
    while(getline(fileIn, line)) {
        stringstream linestream(line);
        string data;

        string title;
        string publisher;
        string platform;
        int releaseYear;
        double price;

        string releaseYearStr;
        string priceStr;

        getline(linestream, title, '|');
        getline(linestream, publisher, '|');
        getline(linestream, platform, '|');
        getline(linestream, releaseYearStr, '|');
        getline(linestream, priceStr, '|');

        releaseYear = ::atof(releaseYearStr.c_str());
        price = ::atof(priceStr.c_str());

        Game game;
        game.title = title;
        game.publisher = publisher;
        game.platform = platform;
        game.releaseYear = releaseYear;
        game.price = price;
        inventory.push_back(game);
    }
}

void displayInventory(vector<Game> inventory) {
    cout << string(100, '-') << endl;
    cout << setw(5) << "#";
    cout << setw(25) << "Title";
    cout << setw(25) << "Publisher";
    cout << setw(10) << "Platform";
    cout << setw(15) << "Release Year";
    cout << setw(20) << "Price" << endl;
    cout << string(100, '-') << endl;

    int i = 0;
    for (Game game: inventory) {
        cout << setw(5) << ++i;
        cout << setw(25) << game.title;
        cout << setw(25) << game.publisher;
        cout << setw(10) << game.platform;
        cout << setw(15) << game.releaseYear;
        cout << setw(20) << game.price << endl;
    }
    cout << string(100, '-') << endl;
}

double displayCart(vector<GameInCart> cart, double salesTax, ofstream &fout) {
    if (cart.size() == 0) {
        fout << "No item in cart.";
        return 0;
    } else {
        cout << string(75, '-') << endl;
        cout << setw(25) << "Title";
        cout << setw(10) << "Platform";
        cout << setw(20) << "Price";
        cout << setw(20) << "Quantity" << endl;
        cout << string(75, '-') << endl;

        double total = 0;

        for (GameInCart game: cart) {
            cout << setw(25) << game.title;
            cout << setw(10) << game.platform;
            cout << setw(20) << game.price;
            cout << setw(20) << game.copies << endl;

            total = total + game.price * game.copies;
        }
        cout << string(75, '-') << endl;

        cout << "Total:    " << setw(65) << total << endl;

        if (total > 100) {
            double discount = total * 0.1;
            cout << "Discount: " << setw(65) << setprecision (2) << fixed << -discount << endl;
            total = total - discount;
        }

        double taxes = total / 100 * salesTax;

        cout << "Taxes:    " << setw(65) << setprecision (2) << fixed << taxes << endl;
        cout << "Owned:    " << setw(65) << setprecision (2) << fixed << total + taxes << endl;
        return total;
    }
}

void readState(vector<State> &states, string code, double &salesTax) {
    for (State s: states) {
        if (s.code == code) {
            salesTax = s.tax;
            break;
        }
    }
}