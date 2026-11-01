#include <iostream> 
 
using namespace std; 
 
int main (){ 
 
    int small_rooms {0}; 
    int large_rooms {0}; 
    const double price_per_small_rooms {25}; 
    const double price_per_large_rooms {35}; 
    const double tax {0.06}; 
    const int valid {30}; 
     
     
 
    cout << "Hello, welcome to Ioana's cleaning service! " << endl; 
    cout <<"Please enter the number of small rooms you would like us to clean: " << endl; 
    cin >> small_rooms; 
    cout <<"Please enter the number of large rooms you would like us to clean: " << endl; 
    cin >> large_rooms; 
    cout <<"The price for a small room is: " << price_per_small_rooms << endl; 
    cout <<"The price for a large room is: " << price_per_large_rooms << endl; 
    cout <<"The cost is: " << (price_per_small_rooms * small_rooms) 
         + (price_per_large_rooms * large_rooms) << endl; 
    cout <<"The tax is " << ((price_per_small_rooms * small_rooms) 
     + (price_per_large_rooms * large_rooms)) * tax << endl; 
    cout <<"=================================="<< endl; 
    cout <<"The total cost is: " << ((price_per_small_rooms * small_rooms) + (price_per_large_rooms * large_rooms)) + (((price_per_small_rooms * small_rooms) 
     + (price_per_large_rooms * large_rooms)) * tax) << endl;
 
    cout <<"The offer is valid for " << valid << " days!" << endl; 
 
 
 
}