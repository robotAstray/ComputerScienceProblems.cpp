/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include <iostream>

int main(){

    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0; 
    for (int i=0; i <15;i++){
        std::cout << "Enter a number"<<"\n";
        scanf("%d", &userInput);
        std::cout << userInput << "\n";
        if (userInput > maxNumber){
            maxNumber = userInput;
        } else if (userInput < minNumber){
            minNumber = userInput;
        }
        sumTotal += userInput;

    }
    average = sumTotal/15;
    std::cout << "Max = "<< maxNumber<< std::endl;
    std::cout <<"Min = "<< minNumber << std::endl;
    std::cout<<"Average = "<<average<<std::endl;
    return 0;
}