#include <iostream>
using namespace std;

class student{
private:
  long id;
  string name;
  int age;

public:
  void set_name(string n);
  void print_name();
  void set_age(int n);
  int get_age();
};

void student::set_name(string n){
  name=n;
}
void student::print_name(){
  cout<<name;
}
void student::set_age(int n){
  age=n;
}
int student::get_age(){
  return age;
}