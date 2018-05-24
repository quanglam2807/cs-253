#include "Roster.hpp"

Roster::Roster(const char* filename) {
    /* TODO:
     * Open the file
     * Read name, major, and gpa in each line
     * Create an object of type Student from each line
     * Push a new object to the studentList
     * Close the file
     */
    ifstream fileIn(filename);
    string line;
    while(getline(fileIn, line)) {
        stringstream linestream(line);

        string name;
        string major;
        double gpa;

        string gpaStr;

        getline(linestream, name, ',');
        getline(linestream, major, ',');
        getline(linestream, gpaStr, ',');

        gpa = ::atof(gpaStr.c_str());

        Student s = Student(name, major, gpa);
        this->studentList.push_back(s);
    }
}

ostream& operator<<(ostream& os, const Roster& r) {
    /* This function is fully implemented */
    for (uint i = 0; i < r.studentList.size(); i++) {
        cout << r.studentList.at(i) << endl;
    }
    return os;
}