#include <iostream>
#include <iomanip> 
#include <ctime>
using namespace std;
char chr;

int main()
{
srand(time(NULL));                                           
int number=rand()%100+1;                                     
int guess;                                                   
int tries=0;                                                 
   char answer;                                                 
answer='y';                  

while(answer=='y'||answer=='Y') 
{
    while (tries<=20 && answer=='y'|| answer=='Y')
    {
    cout<<"Enter a number between 1 and 100 "<<endl;          
    cin>>guess;                                               
    tries++;                                                 
    if(guess==0||guess>100)                                  
    {
     cout<<"This is not an option try again"<<endl;          
    }

    if(tries<20)                                            
    cout<<"Tries left: "<<(20-tries)<<endl;                   

    if(number<guess);                                         
    cout<<"Too high try again"<<endl;                         

    if(number>guess)                                          
    cout<<"Too low try again"<<endl;                          

    if(number==guess)                                          
    {
     cout<<"Congratualtions!! "<<endl;                           
     cout<<"You got the right number in "<<tries<<" tries"<<endl;  
     answer = 'n';
    }
    if(tries >= 20)         
    {
    cout << "You've run out of tries!"<<endl;                      
    answer='n';
    }
    if(answer=='n')
    {
     cout<<"Would you like to play again?  Enter Y/N"<<endl;       
     cin>>answer;                                                  
     if (answer=='N'|| answer=='n')                                
     cout<<"Thanks for playing!"<<endl;                            

    else
        number=rand()%100+1;                                        
    }

    }
    }

cin>>chr;
    return 0;

}