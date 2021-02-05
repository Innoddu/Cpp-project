// Inho Choi
// CS 52 #1188
// 01/22/2021
// Module 5 Assignment(Carbonated Drinks)
// Problem 5
// The program shows the names of the top selling flavor that sell more than the average.

#include<iostream>

using namespace std;

void print(int array[], const int SIZE, string flavor[],int average); 
int compute(int avg[]);

int main(){

    const int SIZE=5;
    string name[SIZE] = {"mint","lime","berry","vanilla","bacon"};
    int can[SIZE] = {};
    int check=0;
    int avg_value=0;
    

    for(int i=0; i<SIZE; i++){
        cout<<"Enter the "<< name[i] <<" the number of cans:";
        cin >> can[i];
       
    }

    avg_value = compute(can);
    cout<<"average: " <<avg_value<<endl;
    print(can, SIZE,name,avg_value);
    return 0;
}
void print(int array[], const int SIZE, string flavor[],int average) 
{
    int save=0;
    string temp;
    
 for (int i = 0; i < SIZE-1; i++){
        for (int j = i+1; j < SIZE; j++){
            if (array[i] < array[j]){
                save=array[j];
                array[j]=array[i];
                array[i]=save;

                temp=flavor[j];
                flavor[j]=flavor[i];
                flavor[i]=temp;
            }
         
        } 
       
    } 
    
    cout <<"The names of top selling flavors "<<endl;
    for(int i=0; i<SIZE; i++){ 
        cout<<flavor[i]<<" : "<< array[i]<< endl;  
   }

    cout <<"Output the name equal or above the average "<<endl;
    for(int i=0; i<SIZE; i++){
       if(array[i]>=average){
        cout<<flavor[i]<<" : "<< array[i]<< endl;
       }
   }
  
}
int compute(int avg[]){
    int total=0;
    int avg_sales=0;
      for(int i=0; i<5; i++){
        total += avg[i];
    }
        avg_sales = total/5;
        return avg_sales;
}
