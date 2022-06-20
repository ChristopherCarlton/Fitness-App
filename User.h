#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User{
public:
  User();
  User(string name, int age, int weight); //overloaded user constructor
  ~User();
  void setWeight(int w); //sets the time needed for a student at a window
  int getWeight(); //gets time needed for a student at a window
private:
  string name;
  int age;
  int weight;
};

#endif
