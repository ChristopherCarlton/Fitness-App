#include "Menu.h"
#include <iostream> //to use cout and cin
#include <fstream>
#include "Tables.h"
using namespace std;

Tables *tb;
Menu::Menu(){
  tb = new Tables();
  //readStudentDB("student.db");
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

void Menu::readUserDB(string file){
  string goldFile = file;
  string line;
  ifstream userFile (goldFile);
  while ( getline (userFile,line) ) {
    string username;
    string password;
    //username = line.substr(0,)
    /*stringstream check1(line);
    string intermediate = "";
    DLList<string> tokens;

    // Tokenizing each field  '/' seperator
    // e.g:100/Nicholas Sniff/Freshman/Biology/GPA: 3.5/AdvisorID: 501
    while(getline(check1, intermediate, '/'))
    {
        //cout << "STUDENT TOKEN: " << intermediate << endl;
        tokens.insertBack(intermediate);
    }

    int studentid = 0;
    int facultyid = 0;
    double gpa = 0.0;

    string studentid_str = tokens.peek(0);
    string advisor_str = tokens.peek(5);//Advisor e.g: Advisor ID: 300
    string gpa_str = tokens.peek(4);//GPA e.g: GPA: 4.0

    stringstream studentId(studentid_str);
    stringstream advisorId(advisor_str);
    stringstream gpaNum(gpa_str);

    //Again tokenizing Gpa and Advisor IDs
    string temp;
    while(getline(advisorId, temp, ' '))
    {
        //cout << "advisorId: " << temp;
        facultyid = atoi(temp.c_str());
    }
    while(getline(gpaNum, temp, ' '))
    {
        //cout << "gpaNumumber: " << temp;
        gpa = atof(temp.c_str());
    }

    studentId >> studentid;
    StudentRecords stu(studentid,tokens.peek(1),tokens.peek(2),tokens.peek(3),gpa,facultyid);
    tb->addStudent(stu);*/
  }
  userFile.close();
}
