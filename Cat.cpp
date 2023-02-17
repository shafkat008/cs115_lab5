// Name:Shafkat Alam
// Student Number:200443237
// Date:1/10/2021

#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(){

  length = 0;
  height = 0;
  tailLength = 0;
  eyeColour = "";
  furClassification = "";
  for(int i = 0; i < NUM_COL; i++){

    furColours[i]= "";
  }
}
Cat::Cat(double l, double h, double tL, string eC, string fCl, const string furCol[])
{
  int i = 0;
  length = l;
  height = h;
  tailLength = tL;
  eyeColour = eC;
  furClassification = fCl; //long, medium, short, none
  while (furCol[i] != "")
  {
	  furColours[i] = furCol[i];
    i++;
  }
  furColours[i] = "";

}

string Cat::getFurColour() const  {
  
  for(int i = 0; i < 1; i++){

    return furColours[i];
  }
}

void Cat::readCat() 
{
  int i = 0;
  cout << "Please describe the cat" << endl;
  cout << "Please enter a length: ";
  cin >> length;
  cout << "Please enter a height: ";
  cin >> height;
  cout << "Please enter a tail length: ";
  cin >> tailLength;
  cout << "Please enter an eye colour: ";
  cin >> eyeColour;
  cout << "Please enter a description of the fur (long, medium, short, none): ";
  cin >> furClassification;
  cout << "Please enter the colours of the fur (separated by a space or a newline character). ";
  cout << "Add \"done\" at the end: ";
  cin >> furColours[i]; 
  while (furColours[i] != "done")
  {
    i++;
    cin >> furColours[i]; 
  }
  furColours[i] = "";
}

void Cat::printCat () const
{
  int i = 0;
  cout << "Length: "<< length << "  Height: "<< height 
       << "  Tail Length: " << tailLength << endl;
  cout << "Eye Colour: " << eyeColour 
       << "  Fur Classification: " << furClassification << endl;
  cout << "Cat Colours: ";
  while (furColours[i] != "")
  {
    cout << furColours[i++] << " "; 
  }
  cout << endl;
}

bool Cat::isCalico () const
{
  if (furColours[3] != "")
    return false;
  for (int i=0; i< 3; i++)
  {
  	if (furColours[i] != "black" && 
      furColours[i] != "orange" && 
      furColours[i] != "white")
      return false;
  }
  return true;
}

bool Cat::isTaller ( const Cat& cat2) const
{
  return (height > cat2.height);
}
