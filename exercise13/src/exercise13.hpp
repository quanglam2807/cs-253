/*
 * Assignment: Exercise 13
 * Author: Roman Yasinovskyy
 * Date: 2018-05-06
 */
#ifndef EXERCISE13_H
#define EXERCISE13_H

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <limits>

using namespace std;

// Year	Winner	Result	Runner-up
class Final {
    private:
        int year;
        string winner;
        string result;
        string runnerUp;
    public:
        /* Constructors */
        Final(int year, string winner, string result, string runnerUp);
        /* Getters */
        inline int getYear() const { return year; }
        inline string getWinner() const { return winner; }
        inline string getResult() const { return result; }
        inline string getRunnerUp() const { return runnerUp; }
};

// Custom
vector<Final> getFinals(string);
map<string, int> getAppearancesMap(vector<Final>);
map<string, int> getWinsMap(vector<Final>);
map<string, int> getLossesMap(vector<Final>);

// A team with the most appearances in the final
string mostAppearances(string);
// A team with the fewest appearances in the final
string fewestAppearances(string);
// A team with the most wins in the final
string mostWins(string);
// A team with the fewest wins in the final
string fewestWins(string);
// A team with the most losses in the final
string mostLosses(string);
// A team with the fewest losses in the final
string fewestLosses(string);
// A team with the longest sequence of appearances
string longestAppearancesSequence(string);
// A team with the longest sequence of wins
string longestWinningSequence(string);
// A team with the longest sequence of losses
string longestLosingSequence(string);
// The 2nd most successful team
string secondBest(string);

#endif
