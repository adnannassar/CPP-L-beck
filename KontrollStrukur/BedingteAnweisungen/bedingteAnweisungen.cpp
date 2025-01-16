#include <iostream>


int main(){
    // Bedingte Anweisungen : if, else if, else
    int number = 0;
    
    if(number > 0){
        std::cout << "Number is positive" << std::endl;
    }

    else if(number == 0){
        std::cout << "Number is zero" << std::endl;
    }

    else if(number == 2){
        std::cout << "Number 2" << std::endl;
    }

    else if(number >= 3 && number <= 9){
        std::cout << "Number is between 3 and 9" << std::endl;
    }
    
    else{
        std::cout << "Number is negative" << std::endl;
    }

    std::cout<<std::endl;

    // Switch case
    int y;
    std::cout << "Enter a number: ";
    std::cin >> y;
    switch(y){
        case 1: std::cout << "Number is 1" << std::endl; break;
        case 2: std::cout << "Number is 2" << std::endl; break;
        case 3: std::cout << "Number is 3" << std::endl; break;
        default: std::cout << "Number is not 1, 2 or 3" << std::endl;
    }

    std::cout<<std::endl;

    int number1;
    std::cout << "Enter the first number: ";
    std::cin >> number1;


    char operation;
    std::cout << "Enter the operation: +, -, *, / : ";
    std::cin >> operation;

    int number2;
    std::cout << "Enter the second number: ";
    std::cin >> number2;

   

   switch (operation)
   {
    case '+':
        std::cout << "Result: " << number1 + number2 << std::endl;
        break;
    case '-':
        std::cout << "Result: " << number1 - number2 << std::endl;
        break;
    case '*':
        std::cout << "Result: " << number1 * number2 << std::endl;
        break;
    case '/':
        std::cout << "Result: " << number1 / number2 << std::endl;
        break;
    default: std::cout << "Invalid operation" << std::endl;
        break;
   }


    return 1;
}