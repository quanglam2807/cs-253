#include "exercise14.hpp"

map<int, string> readPhrasesFromFile(string filename) {
    map<int, string> res;

    ifstream infile(filename.c_str());
    string line;
    while (getline(infile, line)) {
        stringstream linestream(line);
        
        string numStr;
        string phrase;

        getline(linestream, numStr, '\t');
        getline(linestream, phrase, '\t');

        if (numStr.length() > 0 && phrase.length() > 0) {
            res[stoi(numStr)] = phrase;
        }
    }
    infile.close();

    return res;
}

int generateRandomNum() {
    int res = 0;
    for (int i = 0; i < 5; i++) {
        res = res * 10 + (rand() % 6) + 1;
    }
    return res;
}

int main(int argc, char** argv) {
    int passphraseLength = stoi(argv[1]);
    string fileName = argv[2];
    
    map<int, string> m = readPhrasesFromFile(fileName);

    cout << "---Password candidates---" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < passphraseLength; j++) {
            cout << m[generateRandomNum()] << " ";
        }
        cout << endl;
    }

    return 0;
}