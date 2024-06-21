#include<iostream>>
using namespace std;

 class hero{
 //properties
 private:
 int health;

 char level;
 void print(){
 cout << level <<endl;
 }

 int gethelth(){
 return health;
 }

char getlevel(){
return level;
}
void sethealth(int h){
health = h;
}
void setlevel(char ch){
level = ch;
}
 };

 int main(){
 //creating of  object
  hero ramesh;
  cout <<"ramesh health is " <<ramesh.gethealth() << endl;

  ramesh.health =70;
  ramesh.level ='A';

cout << "health is :" << ramesh.gethealth() << endl;
cout << "health is :" << ramesh.health << endl;

  //cout <<"size:" <<sizeof(h1)<<endl;

 }
