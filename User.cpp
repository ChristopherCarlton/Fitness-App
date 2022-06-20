#include "User.h"

//defaullt constructor for a student
User::User(){
  name = "";
  age = -1;
  weight = -1;
}

//overloaded constructor for a student
User::User(string n, int a, int w){
  name = n;
  age = a;
  weight = w;
}

//destructor
User::~User(){
}

//gets the users weight
int User::getWeight(){
  return weight;
}

//sets the users wight
void User::setWeight(int w){
  weight = w;
}
