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

//driver function
int main()
{
    int sales;
    takeInput(sales);
    int x=option_1();
    int y=option_2(sales);
    int z=option_3(sales);
    cout<<"The total income through first option is: "<<option_1()<<endl;
    cout<<"The total income through second option is: "<<option_2(sales)<<endl;
    cout<<"The total income through third option is: "<<option_3(sales)<<endl;
    if(x>y&&x>z)
    {
        cout<<"Hence, option 1 is the best!!"<<endl;
    }
    else if(y>x&&y>z)
    {
        cout<<"Hence, option 2 is the best!!"<<endl;
    }
    else
        cout<<"Hence, option 3 is the best!!"<<endl;
    return 0;
}



