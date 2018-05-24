#include "exercise5.hpp"

// Quang Lam

int main() {
    srand(253);
    cout << "Exercise 5: Structures" << endl;
    cout << "\nTask 1" << endl;
    /*
     * Task 1
     * Declare and initialize a variable of type Contact and print its values.
     * */
    
    Contact * contact1 = new Contact;
    contact1->name = "Roman Yasinovskyy";
    contact1->phone = "563-111-111";

    Contact contact2;
    contact2.name = "Quang Lam";
    contact2.phone = "515-324-2507";

    cout << contact1->name << ": " << contact1->phone << endl;
    cout << contact2.name << ": " << contact2.phone << endl;

    delete contact1;

    cout << "\nTask 2" << endl;
    /* 
     * Task 2
     * Declare and initialize a variable of type Room and print its values.
     * */
    //TODO
    Room * room1 = new Room;
    room1->building = "Miller";
    room1->number = 100;

    Room room2;
    room2.building = "Disseth";
    room2.number = 516;

    cout << room1->building << " " << room1->number << endl;
    cout << room2.building << " " << room2.number << endl;

    delete room1;

    cout << "\nTask 3" << endl;
    /*
     * Task 3
     * Declare and initialize a variable of type Employee and print its values.
     * The output should depend on the full-time/part-time status
     * */
    //TODO
    Employee * employee1 = new Employee;
    employee1->firstName = "Quang";
    employee1->lastName = "Lam";
    employee1->salary = 10000;
    employee1->isFullTime = true;

    cout << employee1->firstName << " " << employee1->lastName << endl;
    cout << "Salary: " << employee1->salary << ". ";
    if (employee1->isFullTime) {
        cout << "Full Time Employee";
    } else {
        cout << "Part Time Employee";
    }
    cout << endl;

    delete employee1;

    cout << "\nTask 4" << endl;
    /*
     * Task 4
     * Declare and initialize a variable of type Animal and print its values.
     * Weight should be a random number up to 1000
     * */
    double weight1, weight2;
    weight1 = rand() % 1000;
    weight2 = rand() % 1000;
    //TODO
    Animal * animal1 = new Animal;
    animal1->weight = weight1;
    animal1->isHungry = false;

    Animal animal2;
    animal2.weight = weight2;
    animal2.isHungry = true;

    cout << "Animal 1 weighted " << animal1->weight << " is ";
    if (animal1->isHungry) { cout << "hungry"; }
    else { cout << "not hungry"; }
    cout << "." << endl;

    cout << "Animal 2 weighted " << animal2.weight << " is ";
    if (animal2.isHungry) { cout << "hungry"; }
    else { cout << "not hungry"; }
    cout << "." << endl;


    delete animal1;
    
    cout << "\nTask 5" << endl;
    /*
     * Task 5
     * Declare and initialize a variable of type Game and print its values.
     * Declare and initialize a variable of type Game in the main function and print its values.
     * Change the value of rating and print them again.
     * */
    //TODO
    Game * game1 = new Game;
    game1->title = "Call of Duty";
    game1->rating = 4;

    Game game2;
    game2.title = "Star Wars";
    game2.rating = 3;

    cout << game1->title << " has a rating of " << game1->rating << endl;
    cout << game2.title << " has a rating of " << game2.rating << endl;
    
    //TODO
    game1->rating=5;
    game2.rating=2;

    cout << game1->title << " has a rating of " << game1->rating << endl;
    cout << game2.title << " has a rating of " << game2.rating << endl;

    delete game1;

    cout << "\nTask 6" << endl;
    /*
     * Task 6
     * Declare and initialize a vector of 3 Songs.
     * Print the values of all songs.
     * */
    //TODO
    Song song1, song2, song3;
    song1.title = "She Will Be Loved";
    song1.artist = "Maroon 5";
    song2.title = "He's So Fine";
    song2.artist = "The Chiffons";
    song3.title = "Imagine";
    song3.artist = "John Lennon";

    vector<Song> songs = vector<Song>();
    songs.push_back(song1);
    songs.push_back(song2);
    songs.push_back(song3);
    for (Song s: songs) {
        cout << "Song: " << s.title << ", performed by " << s.artist << "." << endl;
    }

    cout << "\nTask 7" << endl;
    /*
     * Task 7
     * Declare and instantiate a variable of type Company.
     * Use function setStockPrice() to change the value of stockPrice.
     * Use function getStockPrice() to print the value of stockPrice.
     * */
    //TODO
    Company * company1 = new Company;
    company1->name = "Luther Inc.";
    company1->stockPrice = 100;

    cout << company1->name << " stock price: " << getStockPrice(*company1) << endl;
    //TODO
    setStockPrice(*company1, 120);

    cout << company1->name << " stock price: " << getStockPrice(*company1) << endl;

    delete company1;

    cout << "\nTask 8" << endl;
    /*
     * Task 8
     * Declare and initialize a variable of type Laptop and print its values.
     * */
    //TODO
    Laptop * laptop1 = new Laptop;
    initLaptop(*laptop1, "HP", 500, "Blue");
    
    cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs " << fixed << laptop1->price << endl;
    
    //TODO
    initLaptop(*laptop1, "Apple", 500, "Gray");
    Laptop laptop2;
    initLaptop(laptop2, "Google", 1000, "Black");

    cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs " << fixed << laptop1->price << endl;

    cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs " << fixed << laptop2.price << endl;
    
    //TODO
    initLaptop(laptop2, "Google", 800, "Green");

    cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs " << fixed << laptop2.price << endl;


    delete laptop1;

    cout << "\nTask 9" << endl;
    /*
     * Task 9
     * Declare and instantiate a variable of type University.
     * Change the value of rating and print it.
     * Use functions, rather 
     * */
    University university1;
    cout << university1.getName() << " has a rating of " << university1.getRating() << endl;
    university1.setName("Luther College");
    university1.setRating(100);
    cout << university1.getName() << " has a rating of " << university1.getRating() << endl;

    cout << "\nTask 10" << endl;
    /*
     * Task 10
     * Declare and populate a vector of students.
     * Read student data from the provided exercise5_in.txt 
     * Store it in the vector and print information about all students (Name, Major, GPA).
     * */
    vector<Student> roster = vector<Student>();
    //TODO
    ifstream f;
    
    const char* fileInStr = "data/exercise5_in.txt";
    f.open(fileInStr);

    if (f.fail()) {
        cout << "Could not open " << fileInStr;
        throw -1;
    }

    string line;
    while (getline(f, line)) {
        stringstream linestream(line);

        string name;
        string major;
        string gpaStr;

        getline(linestream, name, ' ');
        getline(linestream, major, ' ');
        getline(linestream, gpaStr, ' ');

        Student student;
        student.name = name;
        student.major = major;
        student.gpa = ::atof(gpaStr.c_str());
        roster.push_back(student);
    }

    f.close();

    for (Student student: roster) {
        cout << left << setw(10) << student.name << setw(15) << student.major << fixed << student.gpa << endl;
    }

    return 0;
}
