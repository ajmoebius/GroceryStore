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

  if(input=='A'||input=='a')
  {
    cout<<"What is the item?"<<endl;
    cin>>newItem;
    if(numItems<5)
    {
      
      list[numItems]=newItem;
      numItems++;
      /*
      index=0;
      while(index<=numItems)
      {
      cout<<list[index];
      index++;
      }
      */
    }
    else
    {
      cout<<"You'll need a bigger list!"<<endl;
     
    }
  }

  }while(input!='Q'&& input!='q');
 
  cout<<"==ITEMS TO BUY=="<<endl;
  for(int index=0; index<5; index++)
  {
  cout<<index+1<<" "<<list[index]<<endl;
  }
  return 0;
}
