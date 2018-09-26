//Author: Aaron Moebius

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string newItem;
  int index;
  
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

  if(input=='A')
  {
    if(numItems<4)
    {
      cout<<"What is the item?"<<endl;
      cin>>newItem;
      list[numItems]=newItem;
      numItems++;
      
      index=0;
      while(index<=numItems)
      {
      cout<<list[index];
      index++;
      }
    }
    else
    {
      cout<<"You'll need a bigger list!"<<endl;
      cout<<list;
    }
  }

  }while(input!='Q');
  return 0;
}
