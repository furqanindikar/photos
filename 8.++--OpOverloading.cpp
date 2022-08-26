/*
	Define a class Weight containing Kg and Gram as its data members. 
	Overload unary operators ++ and -- to increase weight by 1 if weight <50 and decrease it by 1 if  weight >=50
*/
#include<iostream>
using namespace std;

class Weight
{
    public:
    float W;
    void print()
    {
        cout<<"Weight: "<<W;
    }
    
    void operator --()
    {
        W=W-1;
    }
    void operator ++()
    {
        W=W+1;
    }
};

int main()
{
    Weight Wt;
    cout<<"Enter Weight: ";cin>>Wt.W;
    Wt.print();
    if(Wt.W<50){
    	--Wt;
	}
	else{
		++Wt;
	}
    cout <<"\nNew Values of Weight: " << endl;
    Wt.print();
    return 0;
}
