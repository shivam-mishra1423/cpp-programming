#include<iostream>
using namespace std;
int main(){
char name[20];
cout<<"\n enter your name";
cin.getline(name,20);
cout<<"\n your name is "<<name;
cout<<"\n your name i(write):";
cout.write(name,20);
return 0;
}
