#include "User.h"
#include "Exercises.h"
#include "Menu.h"
#include <iostream>
using namespace std;
/*

*/
int main(){
  Exercises workouts;
  Menu menu;
  int choice;
  menu.welcome();
  workouts.dailyIndexScore();
  while(true){
    cout << "Select a workout for today (enter just the number corresponding to desired workout): " << endl;
    cout << "1. Push, 2. Pull, 3. Legs, 4. Arms, 5. Abs, 6. Glutes/Hamstrings" << endl;
    cin >> choice;
    switch (choice){
      case 1: workouts.push();
      break;
      case 2: workouts.pull();
      break;
      case 3: workouts.legs();
      break;
      case 4: workouts.arms();
      break;
      case 5: workouts.abs();
      break;
      case 6: workouts.glutes_hammstrings();
      break;
      default: cout << "Invalid entry, try again." << endl;
    }
    workouts.toString();
    string choice2;
    cout << "\nWould you like to generate another workout? (yes/no)" << endl;
    cin >> choice2;
    if(choice2 == "no" || choice2 == "No"){
      cout << "Have a nice day!" << endl;
      break;
    }
  }
  // User u("Chris", 21, 200);
  // cout << u.getWeight() << endl;
  return 0;
}
