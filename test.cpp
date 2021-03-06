/**
 * test.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * Contains functions for testing classes in the project.
 */

#include "Graphics.h"
#include "Circle.h"
#include "Color.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"

#include <iostream>
#include <fstream>

using namespace std;


void test_Circle();
void test_Color();
void test_Line();
void test_Point();
void test_Rectangle();
void test_Triangle();

void startTests() {
    test_Point();
    test_Line();
    test_Rectangle();
    test_Circle();
    test_Color();
    
    
    // call other test functions here
    
    return;
}

void test_Point() {
    // test of default constructor
    Point p1;
    cout << "Expected: (0,0), actual: " << p1 << endl;
    
    // test of the non-default constructor
    Point p2(3, 9);
    cout << "Expected: (3,9), actual: " << p2 << endl;

    // test of member function: setX()
    p1.setX(5);
    // test of member function: setY()
    p1.setY(3);

    // test of member functions getX() and getY()
    cout << "Expected: (5,3), actual: ";
    cout << "(" << p1.getX()
         << "," << p1.getY()
         << ")" << endl;
    
    return;
}


void test_Color(){
    //test of default constructor
    Color c1;
    cout << "Expected: 0 0 0 , actual: " << c1 << endl;

    //test non-default constructor
     Color c2(6,70,200);
    cout << "expected: 6 70 200 , actual: " << c2 << endl;
    
    //test of member function setBlue
    c1.setBlue(-2);
    cout << "expected 0 0 0 , actual: " << c1 << endl;
    
    //test of mfember function getBlue
    cout << c2.getBlue() << endl;
    cout << "expected 0 0 0 , actual: " << c1 << endl;
    
    // test of member function getGreen
    Color c3;
    c3.setGreen(280);
    cout << c3.getGreen() << endl;
    cout << "expected 0 255 0 , actual: " << c3 << endl;
    
    Color c4(500, 16, -123);
    cout << "Testing color check range: " << c4 << endl;
    return;
}




void test_Line() {
    // test of default constructor
    Line l1;
    cout << "Expected: (0,0), actual: " << l1 << endl;
    
    Point p1(0,0);
    Point p2(5,5);
    Color yes(7,7,7);
    Line l2(p1, p2, yes);
    cout << "Expected: (0,0), actual: " << l2 << endl;
    
    // test of the set end
    Point testEnd(3,42);
    l1.setEnd(testEnd);
    cout << "Expected: (3,42), actual: " << l1 << endl;
    
    // test of member function: getStart
    Point testStart(99,99);
    cout << l1.getStart() << endl;
     
    // test of member function: write
    //HOW DO I DO THIS ONE???
    
    return;
}

void test_Rectangle() {
    // test of default constructor
    Rectangle r1;
    cout << "Expected: , actual: " << r1 << endl;
    
    // test of the non-default constructor
    Point p1(3, 9);
    Point p2(7, 8);
    Color c(0,0,0);
    Color d(0,100,0);
    
    Rectangle r2(p1, p2, d);
    cout << "Expected: (3,9), actual: " << r2 << endl;
    
    
    Rectangle r3(p1, p2, c, d, d, c);
    cout << "Expected: (3,9), actual: " << r3 << endl;
    
    // test of member function: setColor()
    r1.setColor(d);
     cout << "Expected:, actual: " << r1 << endl;
        // test of member function: getEnd()
    cout << "Expected: (7,8), actual: " << r3.getEnd() << endl;
    // test of member function: setStart()
    r1.setStart(p1);
     cout << "Expected:, actual: " << r1 << endl;
    
    
    return;
}

void test_Triangle(){
    
}


void test_Circle(){
    
    Circle c1;
    cout << "Testing constructor default: " << c1 << endl;
    
    Point center;
    Color mine(13,13,13);
    int radius = 5;
    Circle c2(center, radius, mine);
    
    cout << "Testing constructor default: " << c2 << endl;
    
    Point center2(5,5);
    c2.setCenter(center2);
    cout << "Testing setCenter: " << c2 << endl;
    
    Circle c3;
    cout << "Testing setRadius: " << c3 << endl;
    int radius2 = 3;
    c3.setRadius(radius2);
    cout << "Testing setCenter: " << c3 << endl;
    
    Circle c4;
    c4.setRadius(10);
    cout <<"Testing setRadius: " << c4 << endl;
    c4.setRadius(-10);
    cout <<"Testing setRadius: " << c4 << endl;
}




