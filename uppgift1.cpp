#include <iostream>

int main() {
    
    //initialized variables
    int age = 0;
    bool adult;
    bool toddler;
    bool kid;
    constexpr int adultPrice = 80;
    constexpr int todPrice = 30;
    constexpr int kidPrice = 0;
    int price = 0;
    int tickets = 0;
    int currTicket = 0; //current ticket
    
    std::cout << "Welcome to our Football Arena.\n-----------------------------" << std::endl;
    do{
        if (tickets < 0){
            std::cout << "\t\tInvalid number of tickets!!\n\n" << "Enter number of tickets again: ";
        }
        else{
            std::cout << "Number of tickets: ";
        }
        std::cin >> tickets;
    }while(tickets <= 0);
    
    do{
        currTicket += 1;
        
        do{
            if (age < 0){
                std::cout << "\t\tInvalid age!!\n\n"<< "Enter the age again: ";
            }else
            {
                std::cout << "Enter the age for ticket " << currTicket << ": ";
            }
            std::cin >> age;
            
        }while (age < 0);
        
        adult = (age > 15);
        toddler = (age >= 8 && age <= 15);
        kid = (age < 8);
       
        if (adult){
            price += adultPrice;
        }
        else if (toddler){
            price += todPrice;
        }
        else if(kid){
            price += kidPrice;
        }
        
    }while (currTicket < tickets);
    
    std::cout << "Total price = " << price << " SEK\n" << std::endl;
    return 0;
}

