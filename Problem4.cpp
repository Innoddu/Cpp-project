// Inho Choi
// CS 52 #1188
// 01/15/2021
// Module 4 Assignment(Safe Driving Areas)
// Problem 4
// This program show region the lowest number of accidents from input user.

#include <iostream>

using namespace std;

int getNumberOfAccidents(string);
void findLowest(int ,int ,int ,int ,int );

int main(){
    string north = "North";
    string south = "South";
    string west = "West";
    string east = "East";
    string central = "Central";

    int northNum =0;
    int southNum = 0;
    int westNum = 0;
    int eastNum = 0;
    int centralNum = 0;

   northNum = getNumberOfAccidents(north);
   southNum = getNumberOfAccidents(south);
   westNum = getNumberOfAccidents(west);
   eastNum = getNumberOfAccidents(east);
   centralNum = getNumberOfAccidents(central);

    findLowest(northNum,southNum,westNum,eastNum,centralNum);
    return 0;
}
    int getNumberOfAccidents(string regionName){
        int accidentNum = 0;
        int check = 0;
        do{
        cout<<"Enter the "<< regionName << " number of accidents: ";
        cin >> accidentNum;
        if(accidentNum<0){
            cout<<"Please check the number "<<endl;
            check++;
        }
        else check =0;
        }while(check >0);

        return accidentNum;
        
}
    void findLowest(int num1, int num2, int num3, int num4, int num5){
        if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5){
        cout<<"The Lowest number of accident region is North: "<< num1<<endl;
        }
        else if(num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5){
        cout<<"The Lowest number of accident region is South: "<< num2<<endl;
        }
        else if(num3 < num1 && num3 < num1 && num3 < num4 && num3 < num5){
        cout<<"The Lowest number of accident region is West: "<< num3<<endl;
        }
        else if(num4 < num1 && num4 < num3 && num4 < num2 && num4 < num5){
        cout<<"The Lowest number of accident region is East: "<< num4<<endl;
        }
        else if(num5 < num1 && num5 < num3 && num5 < num4 && num5 < num2){
        cout<<"The Lowest number of accident region is Central: "<< num5<<endl;
        }
}
