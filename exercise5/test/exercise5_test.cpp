// Quang Lam
/* 
 * This is an actual test file
 */
#include "catch.hpp"
#include "../src/exercise5.cpp"

TEST_CASE( "Structure Contact is implemented", "[Contact]" ) {
    // Task 1: Write a test for the structure Contact
    Contact * contact = new Contact;
    contact->name = "Quang Lam";
    contact->phone = "515-520-5615";

    CHECK( contact->name == "Quang Lam" );
    CHECK( contact->phone == "515-520-5615" );
}

TEST_CASE( "Structure Room is implemented", "[Room]" ) {
    // Task 2: Write a test for the structure Room
    Room * room = new Room;
    room->building = "Miller";
    room->number = 500;

    CHECK( room->building == "Miller" );
    CHECK( room->number == 500 );
}

TEST_CASE( "Structure Employee is implemented", "[Employee]" ) {
    // Task 3: Write a test for the structure Employee
    Employee * employee = new Employee;
    employee->firstName = "Quang";
    employee->lastName = "Lam";
    employee->salary = 500;
    employee->isFullTime = true;

    CHECK( employee->firstName == "Quang" );
    CHECK( employee->lastName == "Lam" );
    CHECK( employee->salary == 500 );
    CHECK( employee->isFullTime == true );
}

TEST_CASE( "Structure Animal is implemented", "[Animal]" ) {
    // Task 4: Write a test for the structure Animal
    Animal * animal = new Animal;
    animal->weight = 500;
    animal->isHungry = false;

    CHECK( animal->weight == 500 );
    CHECK( animal->isHungry == false );
}

TEST_CASE( "Structure Game is implemented", "[Game]" ) {
    // Task 5: Write a test for the structure Game
    Game game;
    game.title = "Call of Duty";
    game.rating = 5;

    CHECK( game.title == "Call of Duty" );
    CHECK( game.rating == 5 );
}

TEST_CASE( "Structure Song is implemented", "[Song]" ) {
    // Task 6: Write a test for the structure Song
    Song song;
    song.title = "Every Teardrop is a Waterfall";
    song.artist = "Coldplay";

    CHECK( song.title == "Every Teardrop is a Waterfall" );
    CHECK( song.artist == "Coldplay" );
}

TEST_CASE( "Structure Company is implemented", "[Company]" ) {
    // Task 7: Write a test for the structure Company
    Company company;
    company.name = "Google";
    setStockPrice(company, 100);

    CHECK( company.name == "Google" );
    CHECK( getStockPrice(company) == 100);
}

TEST_CASE( "Structure Laptop is implemented", "[Laptop]" ) {
    // Task 8: Write a test for the structure Laptop
    Laptop laptop;
    initLaptop(laptop, "Google", 500, "Gray");

    CHECK( laptop.manufacturer == "Google" );
    CHECK( laptop.price == 500 );
    CHECK( laptop.color == "Gray" );
}

TEST_CASE( "Structure University is implemented", "[University]" ) {
    // Task 9: Write a test for the structure University
    University u;
    u.setName("Luther College");
    u.setRating(10);

    CHECK( u.getName() == "Luther College" );
    CHECK( u.getRating() == 10 );
}

TEST_CASE( "Structure Student is implemented", "[Student]" ) {
    // Task 10: Write a test for the structure Student
    Student student;
    student.name = "Quang";
    student.major = "CS";
    student.gpa = 3.5;

    CHECK( student.name == "Quang" );
    CHECK( student.major == "CS" );
    CHECK( student.gpa == 3.5 );
}