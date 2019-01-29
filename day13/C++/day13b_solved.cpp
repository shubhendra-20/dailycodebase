#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
int main()
{

	int p,i=0;

cout<<"enter no. of terms in series";
  cin>>p;
  while(i<p)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }

	return 0;
}
