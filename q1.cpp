//include library
#include<iostream>
using namespace std;
//driver function
int main()
{
    //declaration of variables. x = apples, y = mangoes, z = bananas
    float x,y,z;
    //loop considering all the possible the values of x
    for(x=1;x<=100;x++)
    {
        //corresponding values of y and z 
        y=(100-x)/5;
        z=100-x-y;
        //condition for y and z to be non negative integers
        if(y==int(y)&&z==int(z))
        {
            //prints the possible solutions which satisfy the required criteria
            cout<<x<<" "<<y<<" "<<" "<<z<<endl;
        }
    }
    
    return 0;
}
