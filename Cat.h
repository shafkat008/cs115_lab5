// Name:Shafkat Alam
// Student Number:200443237
// Date:1/10/2021

#ifndef __CAT_H__
#define __CAT_H__
#include <string>
using namespace std;

const int NUM_COL = 5; //constant for number of colours
class Cat
{ 
  private:
    double length;
    double height;
    double tailLength;
    string eyeColour;
    string furClassification; //long, medium, short, none
    string furColours[5];

  public:
    //default constructors
    Cat ();
    //constructors
    Cat (double, double, double, string, string, const string[]);
    //getters & setters function
    string getFurColour() const;
    void readCat();
    void printCat () const;
    bool isCalico () const;
    bool isTaller (const Cat&) const;
};
#endif
