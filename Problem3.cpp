// Inho Choi
// CS 52 #1188
// 01/13/2021
// Module 3 Assignment(Average Rainfall)
// Problem 3
// This program compute the rainfall to input from user.
#include <iostream>

using namespace std;

int main(){

    // Declare variables
    int firstYear = 0;
    int secondYear = 0;
    int input = 0;
    int count = 0;
    float rainFall = 0;
    int total_month = 0;
    float total_rainFall =0;
    float ave = 0;
   
    // Program start
    while(input != 2){

   
     cout << "Press [1] Compute Rainfall" << endl;
     cout << "Press [2] Exit the program" << endl;
     cin >> input;

    switch(input){

        case 1:
             do{
            cout << "Enter the first year(between 1900 and 2021): ";
            cin >> firstYear;
            cout << "Enter the second year(between 1900 and 2021): ";
            cin >> secondYear;
  
            if((firstYear <1900 || firstYear>2021) || (secondYear <1900 || secondYear>2021)
            || (secondYear < firstYear)){ 
                cout<< "Please check the year!!" <<endl;  
                ++count;
            }
             else       
                 count = 0;

             }while(count > 0);
                
            
                for(int i =firstYear; i<=secondYear; i++){
                     for(int j=1; j<=12; j++){
                     do{
                     cout<< "Enter " << i << " year rainfall "<<j<<" month :";
                     cin>>rainFall;
                       
                        if(rainFall <0){
                         cout << "Please re-enter" <<endl;
                         count++; 
                        }
                        else 
                        count =0;

                     }while(count >0);

                    total_rainFall += rainFall;
                    total_month++;
                    }             
            } 
           
             ave = total_rainFall/total_month;
             cout <<"************"<< endl;
             cout << "Total Month: "<<total_month << endl;
             cout << "Total Rainfall: "<<total_rainFall << endl;
             cout << "Average Rainfall: "<< ave << endl;
             cout <<"************"<< endl;
          break;
        
        case 2:
            cout << "Bye :)" << endl;
            exit(0);
        break;

        default:
        cout << "Please re-enter" << endl;
        break;
         }
    
       
    }
    
    return 0;
}