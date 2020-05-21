#include <iostream>
#include "Event.h"
using namespace std;
class Exhibition : public Event// fill the code
{
    private:
        int noOfStalls;
    public:
    // fill the code
    
    
        void setNoOfStalls(int noOfStalls){
            this->noOfStalls = noOfStalls;
        }
        int getNoOfStalls(){
            return this->noOfStalls;
        }
        void display()
        {
             // fill the code
             cout<<"Name : "<<name<<endl;
             cout<<"Detail : "<<detail<<endl;
             cout<<"Type : "<<type<<endl;
             cout<<"Organiser : "<<organiser<<endl;
             cout<<"No of Stalls : "<<noOfStalls<<endl;
             
        }
        Exhibition()
        {
            
        }
        Exhibition(string name,string detail,string type, string organiser , int noOfStalls)
        :Event(name,detail,type,organiser)
        {
            this->noOfStalls=noOfStalls;
        }
};
