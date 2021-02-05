// Inho Choi
// CS 52 #1188
// 01/23/2021
// Module 6 Assignment(Word Counter)
// Problem 6
// The program compute string and dispalys how many string have.

#include<iostream>
#include<string>

using namespace std;

int show(string input);

int main(){
    string str ="";

    int receive=0;
    receive = show(str);
    cout << "words: "<< receive << endl;
  
    return 0;
}
int show(string input){
    int count = 0;
    cout << "Enter the strings : ";
    getline(cin,input);
    cout << input<<endl;
    for(int i =0; i <input.length(); i++){
        if(input[i]==' '){
        count++;
        }
    }
    count += 1;
    return count;
}