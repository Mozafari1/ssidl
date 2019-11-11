#include <iostream>
#include <string.h>
using namespace std;

std::string bmi(double w,double h){
    double H = h/100;
    double bmi = w/H/H;
    if(bmi<=18){
        return bmi, "Underweight";
    }
    else if(bmi <= 25){
        return bmi, "Normal";
    }
    else if(bmi <= 30){
        return bmi, "Overweight";
    }
    else{
        return bmi, "Obese";
    }
    throw std::logic_error("Method or operation is not implemented");
}
int main(){
    double weight;
    double height;
    std::cout<<"Please enter your weight in kg: ";
    std::cin >>  weight;
    std::cout<<"Please enter your height: ";
    std::cin>>height;
    string BMI = bmi(weight,height);
    std::cout<<"The result is: "<<BMI;
}
