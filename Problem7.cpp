// Inho Choi
// CS 52 #1188
// 01/31/2021
// Module 7 Assignment(Bus)
// Problem 7
// The program practices class, constructor, setter and getter.

#include<iostream>
using namespace std;

class Bus {
private:
    string name;

public:
    Bus(){
        cout<<"Bus Default Constructor is called!";
    }
    Bus(string busDriverName){
        //cout << "Inho Choi" << endl;
        this->name = busDriverName;
       
    }
    void printDriverName(){
        cout << "Driver’s name is " + name;
    }
    void setDriverName(string name){
        this->name = name;
    }
    string getDriverName(){
        return this->name;
    }

};


int main(){
   cout << "Hello C++! I love CS52"<<endl;  
   Bus bus1;
   cout << endl;
   Bus bus2("Inho Choi");
   bus2.printDriverName();
   cout << endl;
   bus2.setDriverName("Ryu");
   bus2.getDriverName();
   bus2.printDriverName();
    return 0;
}