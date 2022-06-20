#include "Menu.h"
#include <iostream> //to use cout and cin
#include <fstream>
using namespace std;

Menu::Menu(){

}

Menu::~Menu(){

}

void Menu::welcome(){
  string account;
  string username;
  string password;
  cout << "Welcome to Gainz!" << endl;
  cout << "Do you have an account? (yes/no)" << endl;
  cin >> account;
  if(account == "yes" || account == "Yes"){
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    cout << "  " << endl;
    loggedin(username, password);
  }
  else if (account == "no" || account == "No"){
    //create account
    cout << "Lets create an account" << endl;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    cout << "  " << endl;
    createAccount(username, password);
  }
  else{
    cout << "input is invalid try again" << endl;
  }
}

void Menu::loggedin(string username, string password){
  string line;
  ifstream myfile ("database.txt");
  bool correct = false;
  while ( getline (myfile,line) )
    {
      int pos = line.find(" ");
      if(line.substr(0, pos) == username && line.substr(pos+1) == password){
        correct = true;
      }
    }
  if(correct == true){
    cout << "Succesfully logged in " << username << "!" << endl;
  }
  else{
    cout << "One or more of the following fields is incorrect." << endl;
  }
  myfile.close();
}

void Menu::createAccount(string username, string password){
  string line;
  ofstream myfile; //("database.txt");
  myfile.open("database.txt", ios::app);
  myfile << username << " " << password << endl;
  myfile.close();
  cout << "Account succesfully created!" << endl;
}
