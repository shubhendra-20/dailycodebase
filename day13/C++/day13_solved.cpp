#include<iostream>
using namespace std;


int fact(int n)
{
	if(n == 1)
  {
  return 1;
  }
	else
  {
  return n * fact(n - 1);
  }
}
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

	int n,p,i=0;
	cin >> n;

	cout << "Factorial= " << fact(n);

  cout<<"enter no. of terms in series";
  cin>>p;
  while(i<p)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }

	return 0;
}
