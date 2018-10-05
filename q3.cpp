#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float i=1;
    int j=1;
    float sum=0;
    while(true)
    {
        sum=sum+i;
        i++;
        float p=sqrt(sum);
        if (p==int(p))
        {
            j++;
            cout<<sum<<endl;
            if (j>4)
            {
                return 0;
            }
        }
        
    }
}
