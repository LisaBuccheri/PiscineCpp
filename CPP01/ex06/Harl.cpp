#include "Harl.hpp"

Harl::Harl( void )
{
    return ;
}

Harl::~Harl( void )
{
    return ;
}

void Harl::complain (std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void        (Harl::*ptrFunctions[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int         i = 0;

    for(i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            break ;
    }
    switch (i)
    {
        case (0):
            (this->*ptrFunctions[0])();
        case (1):
            (this->*ptrFunctions[1])();
        case (2):
            (this->*ptrFunctions[2])();
        case (3):
            (this->*ptrFunctions[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for mt 7XL-double-cheeese-triple-pickel-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my buger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have so;me etra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unaccepltable! I want to speak to the manager now." << std::endl;
}