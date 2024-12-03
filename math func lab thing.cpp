/*
Andrew Sinha
Math Functions Lab
12/3/24
Alblas B1
*/
//inlcuding the necessary
#include <iostream>
#include <cmath>

//no namespace std

int main(){

    //1: Sine 
    //The test score your friend got is equal to the sine of 32 times 100. Considering this, did he succeed or fail the test?
    std::cout << sin(32)*100<<  " means your friend has failed the test." << std::endl;


    //2: Absolute Value
    //Your test score is equal to the absolute value of -90. What is your score?
    std::cout << "Your score is: " << abs(-90) << std::endl;


    //3: Raise to a power
    //A car is travelling at 30 miles per hour. However, the car exponentially speeds up by five times its current speed. With this information in  mind, what is the current speed of the car?
    std::cout << "The car is going " << pow(30, 5) << " miles per hour." << std::endl;


//the end
return 0;
}