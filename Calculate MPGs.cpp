#include<iostream>
#include<iomanip>

using namespace std;

int main() {
   float compactMPG = 47.5, sedanMPG = 27.5, suvMPG = 21.0, pickupMPG = 17.5, mpg, trip, totalCost, totalGallons;
   const float gasPrice = 2.79;
   int input;
   string firstName, lastName, fullName, vehicle;
   
   int again = 0;
   
   //Get users name
   
   cout << "Please enter your first and last name.\n";
   cin >> firstName;
   cin >> lastName;
   fullName = firstName + " " + lastName;
      
   do {    
      cout << "Please select the type of car you're going to travel in.\nEnter a number from 1 to 4\n\n";
      
      //Output car types
      cout << "  Vehicle Type     |       MPG       \n";
      cout << "--------------------------------------\n";
      cout << " (1) Compact Car         47.5mpg\n";
      cout << " (2) Sedan               27.5mpg\n";
      cout << " (3) SUV                 21.0mpg\n";
      cout << " (4) Pickup Truck        17.5mpg\n";
      
      //Get input from user
      cin >> input;
      
      switch(input) {
         case 1:
            cout << "You have chosen a Compact Car (47.5mpg).\n\n";
            vehicle = "Compact Car";
            mpg = compactMPG;
            break;
         case 2:
            cout << "You have chosen a Sedan (27.5mpg).\n\n";
            vehicle = "Sedan car";
            mpg = sedanMPG;
            break;
         case 3:
            cout << "You have chosen a SUV (21.0mpg).\n\n";
            vehicle = "SUV car";
            mpg = suvMPG;
            break;
         case 4:
            cout << "You have chosen a Pickup Truck (17.5mpg).\n\n";
            vehicle = "Pickup Truck";
            mpg = pickupMPG;
            break;
      }
      
      cout << "Enter the amount of miles you will travel.\n";
      cin >> trip;
      
      totalGallons = trip / mpg;
      totalCost = totalGallons * gasPrice;
      
      
      //Output to user
      cout << fixed << setprecision(2);
      cout << "\n\n" << fullName << " for your trip of " << trip << " miles in a " << vehicle << endl;
      cout << "you will use " << totalGallons << " gallons of gas at a cost of $" << totalCost << ".\n\n\n";
      
      cout << "Would you like to enter another trip? Enter 1 for yes and 0 for no.\n";
      cin >> input;
      
      if(input == 0) {
         again = 1;
      }
      
   } while(again == 0);
   
   return 0;
}