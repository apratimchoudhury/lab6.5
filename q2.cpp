//include library
#include<iostream>
using namespace std;

//function for taking input
void takeInput(int &sales)
{
    cout<<"Enter the weekly sales: ";
    cin>>sales;
}

//function for 1st salary option
int option_1()
{
   int op1=600;
   return op1;
}

//function for 2nd salary option
int option_2(int sales)
{
    int op2=7*40+sales*225*0.1;
    return op2;
}

//function for 3rd salary option
int option_3(int sales)
{
    int op3=sales*225*0.2+20*sales;
    return op3;
}

int main()
{
    int sales;
    takeInput(sales);
    cout<<option_1()<<endl;
    cout<<option_2(sales)<<endl;
    cout<<option_3(sales)<<endl;
    return 0;
}


