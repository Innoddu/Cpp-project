// Inho Choi
// CS 52 #1188
// 01/06/2021
// Unit 2 Assignment(Color Mixer)
// Problem 1
// This program makes color from user input color
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    // Constant declare colors
    const string BLUE = "blue";
    const string RED = "red";
    const string YELLOW = "yellow";

    // Variables input from user
    string color1 = "";
    string color2 = "";

    // Input color from user
    cout << "Enter the first color(blue/red/yellow): " << endl;
    cin >> color1;
    cout << "Enter the second color(blue/red/yellow): " <<endl;
    cin >> color2;

    // Transform from uppercase to lowercase (this function needs #include<algorithm>)
    std::transform(color1.begin(), color1.end(), color1.begin(), ::tolower);
    std::transform(color2.begin(), color2.end(), color2.begin(), ::tolower);
 
    // Mixing color
    if(color1 == color2 ){
        cout << "Enter the different color each other." << endl; 
    }
    else if(color1 == RED && color2 == BLUE || color1 == BLUE && color2 == RED){
        cout<< "Congratulation! You make Purple color. " << endl;
    }
    else if(color1 == RED && color2 == YELLOW || color1 == YELLOW && color2 == RED){
        cout<< "Congratulation! You make Orange color. " << endl;
    }
    else if(color1 == BLUE && color2 == YELLOW || color1 == YELLOW && color2 == BLUE){
        cout<< "Congratulation! You make Green color. " << endl;
    }
    else{
        cout<< "Please re-enter the color." << endl;
    }

    return 0;

}