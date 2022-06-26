#include "User.h"

//defaullt constructor for a student
User::User(){
  username = "";
  age = -1;
  weight = -1;
}

User::User(string n, string p){
  username = n;
  password = p;
}

//overloaded constructor for a student
User::User(string n, string p, int a, int w){
  username = n;
  password = p;
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
