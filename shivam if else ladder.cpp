#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter a number";
cin>>num;
if(num>=10 && num<20){
    cout<<"number between 10 and 20";
}
 else if(num>=21 &&num<30){
    cout<<"number between 20 and 30";
}
else if(num>=31 &&num<40){
    cout<<"number between 30 and 40";
}
else if(num>=51 &&num<30){
    cout<<"number between 40 and 50";
}
else{
    cout<<"not found";
}
return 0;
}
