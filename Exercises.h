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
  void dailyIndexScore();
  void toString();
private:
  float IndexScore;
  string experience;
  string focus;
  int num;
  string workout;
  string * exercises;
};

#endif
