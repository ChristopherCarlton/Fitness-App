#ifndef EXERCISES_H
#define EXERCISES_H

#include <string>
using namespace std;

class Exercises{
public:
  Exercises();
  ~Exercises();
  void arms();
  void abs();
  void glutes_hammstrings();
  void legs();
  void pull();
  void push();
  float dailyIndexScore();
private:
  int num;
};

#endif
