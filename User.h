#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User{
public:
  User();
  User(string username, string password);
  User(string username, string password, int age, int weight); //overloaded user constructor
  ~User();
  void setWeight(int w); //sets the time needed for a student at a window
  int getWeight(); //gets time needed for a student at a window
private:
  string username;
  string password;
  string experience; //beginner, intermediate, advanced
  string focus; //strength/power/ muscle growth/
  int age;
  int weight;
};

#endif
