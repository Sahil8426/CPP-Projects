#include<iostream>
#include<stdlib.h>
int main()
{
  //Live long and prosper

  int user = 0;
srand(time(NULL));
//makes use of the computer's internal clock to control the choice of the seed. Since time is continually changing, the seed is forever changing.
int computer = rand() %3 + 1;
std::cout <<"=============================\n";

std::cout <<" Rock Paper Scissors with Big Smoke!\n";

std::cout <<"==============================\n";

std::cout <<"Enter your name fool!\n";
char name[100];
std::cin>>name;
int us=0 , comp =0;


while(user != 4 )
{
std::cout << "1)  ?\n";
std::cout << "2)  ?\n";
std::cout << "3)  ??\n";
std::cout << "4)EXIT\n\n";
std::cout << "shoot!\n";
std::cin>>user;

if(user == 1)
{
  if(computer == 2)
  {
    std::cout<<"You choose the wrong move fool!\n";
    comp++;
  }
  if(computer == 3)
  {
    std::cout<<"Damn you won!\n";
    us++;
  }
  if(computer == 1)
  {
   std::cout<<"Its a tie , we have same thoughts\n";
  }
}

else if(user == 2)
{
  if(computer == 1)
  {
   std::cout<<"Winner winner mutton dinner\n";
   us++;
  }
  if(computer == 2)
  {
    std::cout<<"Its a tie\n";
  }
  if(computer == 3)
  {
    std::cout<<"Watch out for fools like me\n";
    comp++;
  }
}

  else if(user == 3)
  {
    if(computer == 1)
    {
      std::cout<<"Busta sheer Busta\n";
      comp++;
    }
    if(computer == 2)
    {
      std::cout<<"Damn you got  me\n";
      us++;
    }
    if(computer == 3)
    {
      std::cout<<"Tie fool\n";
    }
  }
  else
  {
    std::cout<<"You serious? \n";
    std::cout<<"Score:\n";
    std::cout<<name<<"___---->"<<us<<"\n";
    std::cout<<"BigSmoke__--->"<<comp<<"\n";
    if(us>comp)
    {
        std::cout<<name<<"Won";
    }
    else{
        std::cout<<"Big Smoke won";
    }
  }
}
}
