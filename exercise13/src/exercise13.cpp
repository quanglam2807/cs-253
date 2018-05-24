#include "exercise13.hpp"

Final::Final(int year, string winner, string result, string runnerUp) {
    this->year = year;
    this->winner = winner;
    this->result = result;
    this->runnerUp = runnerUp;
}

vector<Final> getFinals(string filename) {
    ifstream fileIn(filename);
    string line;

    vector<Final> finals;

    getline(fileIn, line);

    while(getline(fileIn, line)) {
        stringstream linestream(line);

        int year;
        string winner;
        string result;
        string runnerUp;

        string yearStr;

        getline(linestream, yearStr, '\t');
        getline(linestream, winner, '\t');
        getline(linestream, result, '\t');
        getline(linestream, runnerUp, '\t');

        year = ::atof(yearStr.c_str());

        Final f = Final(year, winner, result, runnerUp);
        finals.push_back(f);
    }

    return finals;
}

map<string, int> getAppearancesMap(vector<Final> finals) {
    map<string, int> m;

    for (Final f:finals) {
        int countWinner = 1;
        if (m.count(f.getWinner()) > 0) {
            countWinner = m.at(f.getWinner()) + 1;
        }

        int countRunnerUp = 1;
        if (m.count(f.getRunnerUp()) > 0) {
            countRunnerUp = m.at(f.getRunnerUp()) + 1;
        }

        m[f.getWinner()] = countWinner;
        m[f.getRunnerUp()] = countRunnerUp;
    }

    return m;
}

map<string, int> getWinsMap(vector<Final> finals) {
    map<string, int> m;

    for (Final f:finals) {
        int countWinner = 1;
        if (m.count(f.getWinner()) > 0) {
            countWinner = m.at(f.getWinner()) + 1;
        }

        int countRunnerUp = 0;
        if (m.count(f.getRunnerUp()) > 0) {
            countRunnerUp = m.at(f.getRunnerUp());
        }

        m[f.getWinner()] = countWinner;
        m[f.getRunnerUp()] = countRunnerUp;
    }

    return m;
}

map<string, int> getLossesMap(vector<Final> finals) {
    map<string, int> m;

    for (Final f:finals) {
        int countWinner = 0;
        if (m.count(f.getWinner()) > 0) {
            countWinner = m.at(f.getWinner());
        }

        int countRunnerUp = 1;
        if (m.count(f.getRunnerUp()) > 0) {
            countRunnerUp = m.at(f.getRunnerUp()) + 1;
        }

        m[f.getWinner()] = countWinner;
        m[f.getRunnerUp()] = countRunnerUp;
    }

    return m;
}


// A team with the most appearances in the final
string mostAppearances(string fileName) {
    vector<Final> finals = getFinals(fileName);

    map<string, int> m = getAppearancesMap(finals);

    string res = "";
    int resCount = 0;
    for (auto const& it: m) {
        if (it.second > resCount) {
            resCount = it.second;
            res = it.first;
        }
    }

    return res;
}
// A team with the fewest appearances in the final
string fewestAppearances(string fileName) {
    vector<Final> finals = getFinals(fileName);

    map<string, int> m = getAppearancesMap(finals);

    string res = "";
    int resCount = numeric_limits<int>::max();
    for (auto const& it: m) {
        if (it.second < resCount) {
            resCount = it.second;
            res = it.first;
        }
    }

    return res;
}
// A team with the most wins in the final
string mostWins(string fileName) {
    vector<Final> finals = getFinals(fileName);

    map<string, int> m = getWinsMap(finals);

    string res = "";
    int resCount = 0;
    for (auto const& it: m) {
        if (it.second > resCount) {
            resCount = it.second;
            res = it.first;
        }
    }

    return res;
}
// A team with the fewest wins in the final
string fewestWins(string fileName) {
    vector<Final> finals = getFinals(fileName);

    map<string, int> m = getWinsMap(finals);
    map<string, int> ma = getAppearancesMap(finals);

    string res = "";
    int resCount = numeric_limits<int>::max();
    for (auto const& it: m) {
        if (it.second < resCount || (
            it.second == resCount && ma[it.first] < ma[res]
        )) {
            resCount = it.second;
            res = it.first;
        }
    }

    return res;
}
// A team with the most losses in the final
string mostLosses(string fileName) {
    vector<Final> finals = getFinals(fileName);

    map<string, int> m = getLossesMap(finals);

    string res = "";
    int resCount = 0;
    for (auto const& it: m) {
        if (it.second >= resCount) {
            resCount = it.second;
            res = it.first;
        }
    }

    return res;
}
// A team with the fewest losses in the final
string fewestLosses(string fileName) {
    vector<Final> finals = getFinals(fileName);

    map<string, int> m = getLossesMap(finals);
    map<string, int> ma = getAppearancesMap(finals);

    string res = "";
    int resCount = numeric_limits<int>::max();

    for (auto const& it: m) {
        if (it.second < resCount || (
            it.second == resCount && ma[it.first] < ma[res]
        )) {
            resCount = it.second;
            res = it.first;
        }
    }

    return res;
}
// A team with the longest sequence of appearances
string longestAppearancesSequence(string fileName) {
    vector<Final> finals = getFinals(fileName);

    set<string> m;

    for (Final f:finals) {
        m.insert(f.getWinner());
        m.insert(f.getRunnerUp());
    }

    int resSeq = 0;
    string res = "";

    for (auto it: m) {
        int seq = 0;
        for (Final f:finals) {
            if (f.getWinner() == it || f.getRunnerUp() == it) {
                seq = seq + 1;
            } else {
                seq = 0;
            }

            if (seq > resSeq) {
                resSeq = seq;
                res = it;
            }
        }
    }

    return res;
}
// A team with the longest sequence of wins
string longestWinningSequence(string fileName) {
    vector<Final> finals = getFinals(fileName);

    int seq = 0;
    string lastTeam = "";

    int resSeq = 0;
    string res = "";

    map<string, int> m = getWinsMap(finals);

    for (Final f:finals) {
        if (lastTeam == f.getWinner()) {
            seq = seq + 1;
        } else {
            seq = 1;
            lastTeam = f.getWinner();
        }

        if (seq > resSeq || (
            seq == resSeq && m[lastTeam] > m[res]
        )) {
            resSeq = seq;
            res = lastTeam;
        }
    }

    return res;
}

// A team with the longest sequence of losses
string longestLosingSequence(string fileName) {
    vector<Final> finals = getFinals(fileName);

    int seq = 0;
    string lastTeam = "";

    int resSeq = 0;
    string res = "";

    map<string, int> m = getLossesMap(finals);

    for (Final f:finals) {
        if (lastTeam == f.getRunnerUp()) {
            seq = seq + 1;
        } else {
            seq = 1;
            lastTeam = f.getRunnerUp();
        }

        if (seq > resSeq || (
            seq == resSeq && m[lastTeam] > m[res]
        )) {
            resSeq = seq;
            res = lastTeam;
        }
    }

    return res;
}
// The 2nd most successful team
string secondBest(string fileName) {
    vector<Final> finals = getFinals(fileName);

    map<string, int> mw = getWinsMap(finals);
    map<string, int> ma = getAppearancesMap(finals);

    string firstBest = mostWins(fileName);

    string res = "";
    int resCount = 0;
    for (auto const& it: mw) {
        if (it.first != firstBest) {
            if (it.second > resCount || 
            (it.second == resCount && ma[it.first] > ma[res])) {
                resCount = it.second;
                res = it.first;
            }
        }
    }

    return res;
}