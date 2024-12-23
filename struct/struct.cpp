#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

struct Person {
  string name;
  int age;
  char gender;
  void print(){
    cout<<name<<" " <<age<<" "<<gender<<endl;
  }
  void input(string name1 , int age1, char gender1){
    name = name1;
    age = age1;
    gender = gender1;

  }

};
int main(){
  Person p;
  // p.name = "Vamsi";
  // p.age = 20;
  // p.gender = 'M';
  // cout<<p.name<<" " <<p.age<<" "<<p.gender<<endl;

  p.input("Vicky",20,'M');
  p.print();

  // cout<<p<<endl; ---> gives error

  Person *ptr = &p;
  ptr->print();
  cout<<ptr->name<<endl;

  return 0;
}