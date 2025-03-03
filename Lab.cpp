//Created by Owen Martin
//Date: 3/2/25
//Description - A menu function of 3 selected items, user is intended to pick one item to be given an output

#include <iostream>
#include <cmath>

using namespace std;

void foodmenu();

int main() {
    int foodchoice = 0;
//User is prompted to choose their order
    cout<<"Welcome to the Krusty Krab, how may I take your order?"<<"\n";
    foodmenu();
//Input from user's want from menu
    cin>>foodchoice;
//User is given an output from their choice of food from menu
    cout<< "Your number "<<foodchoice<<" is coming right up!"<<"\n";
}
//Lines below is the menu that will be printed to user
void foodmenu(){
    cout<< " Burger & Fry Menu"<<"\n";
    cout<< " 1. Krabby Patty ... 99.99$"<<"\n";
    cout<< " 2. Krabby Patty with cheese & pickles ... 199.99$"<<"\n";
    cout<< " 3. Large Fry ... 49.99$"<<"\n";
}