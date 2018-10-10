//Author: Aaron Moebius

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string>list; //empty vector
  int numItems = 0;
  char input;
  string newItem;
  int index;
  
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  if(numItems > 0)
  {
    cout<<"\n (D)elete last item";
  }
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

    if(input == 'd' || input == 'D' && !list.empty())
    {
      cout<<list[list.size()-1]<<" was deleted from the list.\n";
      list.pop_back();
    }

    else if(input=='A'||input=='a')
    {
      cout<<"What is the item?"<<endl;
      cin>>newItem;
      
      list.push_back(newItem);
      numItems++;
    }

  }while(input!='Q'&& input!='q');
 
 
  if(!list.empty())
  {
    
    cout<<"==ITEMS TO BUY=="<<endl;
    
    for(int index=0; index<list.size(); index++)
    {
      cout<<index+1<<" "<<list[index]<<endl;
    }
  }
  else
  {
    cout<<"No items to buy!"<<endl;
  }

  return 0;
}
