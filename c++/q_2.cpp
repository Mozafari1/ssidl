#include <iostream>
#include <string.h>
using namespace std;

std::string hmilu(int petals){
    int new_petals = petals %6;
    switch (new_petals)
    {
    case 0 /* constant-expression */:
        /* code */
        return "Not at all";
    case 1:
        return "I love you";
    case 2:
        return "A little";
    case 3:
        return "A lot";
    case 4: 
        return "Passionately";
    case 5:
        return "Madly";

    default:
        break;
    }
}

int main(){
    int petals;
    std::cout<<"Please enter a value to get know how much you love him/her: ";
    std::cin>>petals;
    string HMILU = hmilu(petals);
    std::cout<<"The result is: "<< HMILU;

}
