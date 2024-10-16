#include "Contact.hpp"
#include <sstream>

void Contact::Set_Id         (int id        ) {this->Id       = id;                ; }
void Contact::Set_Name       (string name   ) {this->Name     = Calculate(name)    ; }
void Contact::Set_Surname    (string surname) {this->Surname  = Calculate(surname) ; }
void Contact::Set_Nickname   (string nick   ) {this->Nickname = Calculate(nick)    ; }
void Contact::Set_Number     (string number ) {this->Number   = Calculate(number)  ; }
void Contact::Set_Secret     (string secret ) {this->Secret   = Calculate(secret)  ; }

string Contact::Get_Id ()    {std::stringstream ss; ss << this->Id; return ss.str(); }
string Contact::Get_Name     (              ) { return    this->Name               ; }
string Contact::Get_Surname  (              ) { return    this->Surname            ; }
string Contact::Get_Nickname (              ) { return    this->Nickname           ; }
string Contact::Get_Number   (              ) { return    this->Number             ; }
string Contact::Get_Secret   (              ) { return    this->Secret             ; }

string Contact::Calculate(string str)
{
    if (str.length() > 10)
        str = str.substr(0, 9) + '.';
    return str;
}

void Contact::Write_All()
{
    std::cout << "         "   << Id       << "|";
    std::cout << std::setw(10) << Name     << "|";
    std::cout << std::setw(10) << Surname  << "|";
    std::cout << std::setw(10) << Nickname << "|";
    std::cout << std::endl;
}

void Contact::Write_All_One()
{
    std::cout << "Id: " << Id << std::endl;
    std::cout << "Name: " <<  Name << std::endl;
    std::cout << "Surname: " << Surname << std::endl;
    std::cout << "Nickname: " << Nickname << std::endl;
    std::cout << "Number: " << Number << std::endl;
    std::cout << "Secret:  " << Secret << std::endl;
}
