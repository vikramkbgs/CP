#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	
	while(testcase--)
	{
	    int totalDragon, totalSlot;
	    int dsaDragon, tocDragon, dmDargon;
	    int dsaSlot, tocSlot, dmSlot;
	    
	    cin>>dsaDragon>>tocDragon>>dmDargon;
	    cin>>dsaSlot>>tocSlot>>dmSlot;
	    
	    totalDragon = dsaDragon + tocDragon + dmDargon;
	    totalSlot = dsaSlot + tocSlot + dmSlot;
	    
	   if(totalDragon > totalSlot)
	        cout<<"Dragon"<<endl;
	   else if(totalDragon < totalSlot)
	        cout<<"Sloth"<<endl;
	   else
	   {
	       
	    if(dsaDragon > dsaSlot)
	        cout << "Dragon" <<endl;
	    else if(dsaDragon < dsaSlot)
	         cout<<"Sloth"<<endl;
    	   else
    	   {
    	       if(tocDragon > tocSlot)
    	         cout<<"Dragon"<<endl;
    	       else if(tocDragon < tocSlot)
    	       cout<<"Sloth"<<endl;
    	       else
    	       {
    	           cout<<"Tie"<<endl;
    	       }
    	   }
	  }
	}
	return 0;
}
