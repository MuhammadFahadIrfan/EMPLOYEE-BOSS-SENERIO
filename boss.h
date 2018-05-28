#include <iostream>
#include "employee.h"
#include "pc.h"
using namespace std;

class boss :public employee
{
  public:
  pc mypc;
  boss(office *o):employee(o)
  {
    mypc.turn_on();
    cout<<"BOSS :: BOSS CONSTRUCTOR"<<endl;

  }
  ~boss()
  {
    mypc.turn_of();
    cout<<"~BOSS :: BOSS DESTRUCTOR"<<endl;
  }
};