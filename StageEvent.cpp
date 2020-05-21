#include <iostream>
#include "Event.h"
using namespace std;
class StageEvent :  public Event // fill the code
{
    private:
        int noOfSeats;
    public:
         // fill the code
        void setNoOfSeats(int noOfSeats){
            this->noOfSeats = noOfSeats;
        }
        int getNoOfSeats(){
            return this->noOfSeats;
        }
        void display()
        {
             // fill the code
             cout<<"Name : "<<name<<endl;
             cout<<"Detail : "<<detail<<endl;
             cout<<"Type : "<<type<<endl;
             cout<<"Organiser : "<<organiser<<endl;
             cout<<"No of Seats : "<<noOfSeats<<endl;
        }
        
        StageEvent(){}
        
        StageEvent(string name,string detail,string type, string organiser , int noOfSeats)
        :Event(name,detail,type,organiser)
        {
            this->noOfSeats=noOfSeats;
        }
};
