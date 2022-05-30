#include<iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;
//sum of divisors
//types: proper divisor(less than number) and factor divisor(including number)
int calculateDivisorSum(int num)
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
        return (1+sum+num); //add num--> for all divisors
    }
}

int sumOfAllDivisor(int n)
{
    int sum=0;
    if (n==1)
    {
        return 1;
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            int sumDivisor = calculateDivisorSum(i);
            sum+=sumDivisor;
        }
        return 1+sum;
    }
}

int main(void)
{

    int num;
    cin>>num;
    cout<<sumOfAllDivisor(num);
    return 0;

}