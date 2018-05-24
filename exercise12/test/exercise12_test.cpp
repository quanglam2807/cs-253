#include "catch.hpp"
#include "../src/exercise12.cpp"
/* Test all functions here */


TEST_CASE ( "Test Array", "[test1]" ) {
    /* Write an assertion here */
    // array<int>
    int arr[5] = {1000, 2, 3, 17, 50};
    CHECK ( sumArray(arr, 5) == 1072 );

    int arr2[0] = {};
    CHECK ( sumArray(arr2, 0) == 0 );

    // array<string>
    string arr3[3] = {"Hello ", "Roman", "!"};
    CHECK ( sumArray(arr3, 3) == "Hello Roman!" );

    string arr4[2] = {"Hi ", "Vietnam"};
    CHECK ( sumArray(arr4, 2) == "Hi Vietnam" );
}

TEST_CASE ( "Test Vector", "[test2]" ) {
    /* Write an assertion here */
    // vector<int>
    vector<int> vec = {1000, 2, 3, 17, 50};
    CHECK ( sumVector(vec) == 1072 );

    vector<int> vec2 = {1000, 2, 3, 17, 50, 1, 5, 10, 5, 6};
    CHECK ( sumVector(vec2) == 1099 );

    // vector<string>
    vector<string> vec3 = {"Hello ", "Roman", "!"};
    CHECK ( sumVector(vec3) == "Hello Roman!" );

    vector<string> vec4 = {"Hi ", "Vietnam"};
    CHECK ( sumVector(vec4) == "Hi Vietnam" );
}

TEST_CASE ( "Test Deque", "[test3]" ) {
    /* Write an assertion here */
    // deque<int>
    deque<int> d;
    d.push_front(77);
    d.push_front(55);
    d.push_back(1);
    CHECK( sumTwoEnds(d) == 56 );
    
    deque<int> d2;
    d2.push_front(77);
    CHECK( sumTwoEnds(d2) == 154 );

    // deque<string>
    deque<string> d3;
    d3.push_front("Quang");
    d3.push_back("Lam");
    CHECK( sumTwoEnds(d3) == "QuangLam" );

    deque<string> d4;
    d4.push_back("Lam");
    CHECK( sumTwoEnds(d4) == "LamLam" );
}

TEST_CASE ( "Test List", "[test4]" ) {
    /* Write an assertion here */
    // list[int]
    list<int> l = {1000, 2, 3, 17, 50};
    CHECK ( sumList(l) == 1072 );

    list<int> l2 = {1000, 2, 3, 17, 50, 1, 5, 10, 5, 6};
    CHECK ( sumList(l2) == 1099 );

    // list<string>
    list<string> l3 = {"Hello ", "Roman", "!"};
    CHECK ( sumList(l3) == "Hello Roman!" );

    list<string> l4 = {"Hi ", "Vietnam"};
    CHECK ( sumList(l4) == "Hi Vietnam" );
}

TEST_CASE ( "Test Stack", "[test5]" ) {
    /* Write an assertion here */
    // stack<int>
    stack<int> s;
    s.push(10);
    s.push(20);
    CHECK ( getTopOfStack(s) == 20 );

    stack<int> s2;
    s.push(20);
    s.push(10);
    s.pop();
    CHECK ( getTopOfStack(s) == 20 );

    // stack<string>
    stack<string> s3;
    s3.push("Hello");
    CHECK ( getTopOfStack(s3) == "Hello" );

    stack<string> s4;
    s4.push("Q");
    s4.pop();
    s4.push("A");
    s4.push("L");
    CHECK ( getTopOfStack(s4) == "L" );
}

TEST_CASE ( "Test Queue", "[test6]" ) {
    /* Write an assertion here */
    // queue<int>
    queue<int> s;
    s.push(10);
    s.push(20);
    CHECK ( getFrontOfQueue(s) == 10 );

    queue<int> s2;
    s.push(20);
    s.push(10);
    s.pop();
    CHECK ( getFrontOfQueue(s) == 20 );

    // stack<string>
    queue<string> s3;
    s3.push("Hello");
    CHECK ( getFrontOfQueue(s3) == "Hello" );

    queue<string> s4;
    s4.push("Q");
    s4.pop();
    s4.push("A");
    s4.push("L");
    CHECK ( getFrontOfQueue(s4) == "A" );
}

TEST_CASE ( "Test Priority Queue", "[test7]" ) {
    /* Write an assertion here */
    // queue<int>
    priority_queue<int> s;
    s.push(10);
    s.push(20);
    CHECK ( getGreatestValue(s) == 20 );

    priority_queue<int> s2;
    s.push(20);
    s.push(10);
    s.pop();
    CHECK ( getGreatestValue(s) == 20 );

    // stack<string>
    priority_queue<string> s3;
    s3.push("Hello");
    s3.push("Q");
    CHECK ( getGreatestValue(s3) == "Q" );

    priority_queue<string> s4;
    s4.push("Q");
    s4.pop();
    s4.push("A");
    s4.push("L");
    CHECK ( getGreatestValue(s4) == "L" );
}

TEST_CASE ( "Test Set", "[test8]" ) {
    /* Write an assertion here */
    // set<int>
    set<int> s = { 5, 1, 2 };
    CHECK ( existsInSet(s, 3) == false );
    CHECK ( existsInSet(s, 5) == true );

    // set<double>
    set<double> s2 = { 5.0, 1, 2 };
    CHECK ( existsInSet(s2, 5.0) == true );
    CHECK ( existsInSet(s2, 3.0) == false );
}

TEST_CASE ( "Test Map", "[test9]" ) {
    /* Write an assertion here */
    // map<string, int>
    map<string, int> m = {
    { "alpha", 0 },
    { "beta", 5 },
    { "gamma", 8 } };
    CHECK ( getValAtKey(m, "alpha") == 0 );
    CHECK ( getValAtKey(m, "gamma") == 8 );

    // map<string, string>
    map<string, string> m2 = {
    { "alpha", "beta" },
    { "beta", "gamma" },
    { "gamma", "zeta" } };
    CHECK ( getValAtKey(m2, "alpha") == "beta" );
    CHECK ( getValAtKey(m2, "gamma") == "zeta" );
}

TEST_CASE ( "Test Container (Forward List)", "[test10]" ) {
    /* Write an assertion here */
    /* Write an assertion here */
    // forward_list[int]
    forward_list<int> l = {1000, 2, 3, 17, 50};
    CHECK ( sumForwardList(l) == 1072 );

    forward_list<int> l2 = {1000, 2, 3, 17, 50, 1, 5, 10, 5, 6};
    CHECK ( sumForwardList(l2) == 1099 );

    // forward_list<string>
    forward_list<string> l3 = {"Hello ", "Roman", "!"};
    CHECK ( sumForwardList(l3) == "Hello Roman!" );

    forward_list<string> l4 = {"Hi ", "Vietnam"};
    CHECK ( sumForwardList(l4) == "Hi Vietnam" );
}