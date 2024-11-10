#include<iostream>
using namespace std;
int isPrime(int num)
{
    if(num<=1)
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
    }
}
int main()
{
    int number;
    cout<<"Enter a number:"<<endl;
    cin>>number;
    if(isPrime(number))
    {
        cout<<number<<"is a prime number";
    }
    else
    {
        cout<<number<<"is not prime";
    }
}
