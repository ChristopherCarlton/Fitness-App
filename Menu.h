#ifndef MENU_H
#define MENU_H

#include <string>
using namespace std;

class Menu{
public:
 Menu();
 ~Menu();
 void welcome();
 void loggedin(string username, string password);
 void createAccount(string username, string password);
 void readUserDB(string file);
private:
  //BST<Users>
};

#endif
