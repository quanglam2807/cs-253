#include "exercise7.hpp"


Book::Book(string title, string author, double price) {
    // TODO: Initialize data members
    this->title = title;
    this->author = author;
    this->price = price; 
}

ostream& operator<<(ostream& os, const Book& b) {
    // TODO: Send data members to the stream os
    os << b.title << " by " << b.author << " costs $" << b.price;
    return os;
}


Room::Room(string building, int number) {
    // TODO: Initialize data members
    this->building = building;
    this->number = number;
}

ostream& operator<<(ostream& os, const Room& r) {
    // TODO: Send data members to the stream os
    os << r.building << " " << r.number;
    return os;
}


Employee::Employee(string firstName, string lastName, double salary, bool isFullTime) {
    // TODO: Initialize data members
    this->firstName = firstName;
    this->lastName = lastName;
    this->salary = salary;
    this->isFullTime = isFullTime;
}

ostream& operator<<(ostream& os, const Employee& e) {
    // TODO: Send data members to the stream os
    os << e.firstName << " " << e.lastName << " earns $" << fixed << setprecision(2) << e.salary;
    os << " and works ";
    if (e.isFullTime) {
        os << "full-time";
    } else {
        os << "part-time";
    }
    return os;
}


Customer::Customer(double loan, int term) {
    // TODO: Initialize data members
    this->loan = loan;
    this->term = term;
}

ostream& operator<<(ostream& os, const Customer& c) {
    // TODO: Send data members to the stream os
    os << "Loan: $" << fixed << setprecision(2) << c.loan << "; Term: " << c.term << " months";
    return os;
}


Game::Game(string title, int rating) {
    // TODO: Initialize data members
    this->title = title;
    this->rating = rating;
}

ostream& operator<<(ostream& os, const Game& g) {
    // TODO: Send data members to the stream os
    os << "The rating of " << g.title << " is " << g.rating;
    return os;
}


Song::Song(string title, string artist) {
    // TODO: Initialize data members
    this->title = title;
    this->artist = artist;
}

ostream& operator<<(ostream& os, const Song& s) {
    // TODO: Send data members to the stream os
    os << s.title << " by " << s.artist;
    return os;
}


Company::Company(string name, double stockPrice) {
    // TODO: Initialize data members
    this->name = name;
    this->stockPrice = stockPrice;
}

ostream& operator<<(ostream& os, const Company& c) {
    // TODO: Send data members to the stream os
    os << c.name << "'s stock price is $" << fixed << setprecision(2) << c.stockPrice;
    return os;
}


College::College(string name, int rank) {
    // TODO: Initialize data members
    this->name = name;
    this->rank = rank;
}

ostream& operator<<(ostream& os, const College& c) {
    // TODO: Send data members to the stream os
    os << c.name << " is ranked #" << c.rank;
    return os;
}

void changeCollegeRank(College& college, int rank) {
    /* This function is fully implemented */
    college.setRank(rank);
}


Laptop::Laptop(string manufacturer, double price, string color) {
    // TODO: Initialize data members
    this->manufacturer = manufacturer;
    this->price = price;
    this->color = color;
}

ostream& operator<<(ostream& os, const Laptop& l) {
    // TODO: Send data members to the stream os
    os << l.color << " laptop by " << l.manufacturer << " costs $" << fixed << setprecision(2) << l.price;
    return os;
}


Student::Student(string name, string major, double gpa) {
    // TODO: Initialize data members
    this->name = name;
    this->major = major;
    this->gpa = gpa;
}

ostream& operator<<(ostream& os, const Student& s) {
    // TODO: Send data members to the stream os
    os << s.name << " (" << fixed << setprecision(2) << s.gpa << ") majors in " << s.major;
    return os;
}


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
