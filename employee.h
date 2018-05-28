#include <iostream>
#include "desk.h"
#include "office.h"

using namespace std;

class employee 
{
  public:
  desk mydesk;
  office *myoffice;
  employee(office *o)
  {
    myoffice =0;
    cout<<"EMPLOYEE :: EMPLOYEE()"<<endl;
  }
   ~employee()
   {
     cout<<"EMPLOYEE :: DESTRUCTOR"<<endl;
   }


};