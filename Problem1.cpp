// Inho Choi
// Assignment1 (Conert Tickets)
// Problem1
// This program commute ticket price with tax.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << setprecision(2) << fixed << showpoint;
    
    const int PRE_TICKET = 80;
    const int REG_TICKET = 40;

    int input1 = 0;
    int input2 = 0;

    cout << "How many tickets would you like to order?"<< endl;
    cout << "Premium Tickets ($80): ";
    cin >> input1;
    cout << "Regular Tickets ($40): ";
    cin >> input2;
    cout << "Invoice" << endl;

    float taxRate = 0.0925; 
    
    
     float subTotal1 = (PRE_TICKET * input1);
     float subTotal2 = (REG_TICKET * input2);
     float tax = (subTotal1+subTotal2) * taxRate;
     float total = subTotal1 + subTotal2 + tax;
    
     cout << "Premium: $" << setw(4) << PRE_TICKET << " x " << setw(2) << input1 << " $" << setw(7) << subTotal1 << endl;
     cout << "Regular: $" << setw(4) << REG_TICKET << " x " << setw(2) << input2 << " $" << setw(7) << subTotal2 << endl;
     cout << "Sales Tax: "   << setw(7) << (taxRate*100)<<"% $" << setw(7) << tax << endl;
     cout << "Total Price:        $" << setw(7) << total << endl;

     return 0;
}