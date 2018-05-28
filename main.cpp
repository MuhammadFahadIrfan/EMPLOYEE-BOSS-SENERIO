#include <iostream>
#include "boss.h"
using namespace std;

int main()
{
  office *poff=new office();
  cout<<"OFFICE END"<<endl<<endl;

 cout<<"BOSS START"<<endl<<endl;
  boss *pboss=new boss(poff);
   cout<< endl<<"******Destructors called******" <<endl<<endl;
  delete pboss;
  cout<< endl<<endl<<"******Polymorphism******" <<endl<<endl;
  employee *emp=new boss(poff);
   cout<< endl<<"******Destructors called******" <<endl<<endl;
   delete emp;
   system ("pause");
   }