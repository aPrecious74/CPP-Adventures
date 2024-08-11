#include <iostream>

int main()
{
  int month;
  std::cout<<"Enter a number between 1-12 ";
  std::cin>> month;

  switch(month){
  case 1:
    std::cout<<"It is January";
  break;
    case 2:
    std::cout<<"It is Febuary";
  break;
  case 3:
    std::cout<<"It is March";
  break;
  case 4:
    std::cout<<"It is April";
  break;
  case 5:
    std::cout<<"It is May";
  break;
  case 6:
    std::cout<<"It is June";
  break;
  case 7:
    std::cout<<"It is July";
  break;
  case 8:
    std::cout<<"It is August";
  break;
  case 9:
    std::cout<<"It is September";
  break;
  case 10:
    std::cout<<"It is October";
  break;
  case 11:
    std::cout<<"It is November";
  break;
  case 12:
    std::cout<<"It is December";
  break;

  default:
    std::cout << "Please enter a number between 1-12";
}  
}

 /*
    int age; //stores integers. mention variables before defining
    int x= 1;
    int y=3;
    age= x+y;
    std::string name = "Precious"; // stores words/sentences
    // char stores a single letter. double stores a decimal value, and int store just numbers

    std::cout << "Hi my name is " << name << '\n' /*adds a new line break*/;
  /*  std::cout << "and I am " << age << " years old";

    double toe;
    toe = 34.4;
     
double feet=70.9;
std::cout <<'\n'<< toe <<'\n'<< feet;
    return 0;
*/
/*
std::string name;
int age;

std::cout<< "What's your age?: ";
std::getline(std::cin,age);

std::cout << "what's your full name?: " ;
std::cin>> name;

std::cout << "Hello "<< name << '\n';
std::cout << "You are "<< age<< " years old";
}*/