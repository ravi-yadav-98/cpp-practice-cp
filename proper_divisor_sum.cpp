#include<iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;
//sum of divisors
//types: proper divisor(less than number) and factor divisor(including number)
int calculateProperDivisorSum(int num)
{
    int sum =0;
    if(num==1)
    {
        return sum;
    }
    else
    {
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                if(i*i==num)
                {
                sum = sum+i;
                }
                else
                {
                    sum +=(i+num/i);
                }

            }

        }
        return (sum+1); //add num--> for all divisors
    }
}

int main(void)
{

    int num;
    cin>>num;
    cout<<calculateProperDivisorSum(num);
    return 0;

}