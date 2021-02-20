#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;


void no_special(string *new_id)
{
  for(int i = -1; i <new_id->length(); i++)
  {
    if((new_id-> at(i) >= 97 && new_id-> at(i) <= 122) || (new_id-> at(i) >= 48 && new_id-> at(i) <= 57))
    {
      
    }
    else if(new_id-> at(i) != 45 && new_id-> at(i) != 46 && new_id-> at(i) != 95)
    {
      new_id->erase(new_id->begin()+i);
    }
    
  }
}

void lower(string* new_id)
{
  for(int i = 0; i <new_id->length(); i++)
  {
    if(new_id->at(i) >= 65 && new_id->at(i) <= 92)
    {
      new_id->at(i) = new_id->at(i)+32;
    }
  }
}

int main() {

string new_id;
cout<< "type your new ID: ";
cin>> new_id;

lower(&new_id);
no_special(&new_id);

cout<< new_id<<"\n";

return 0;


}