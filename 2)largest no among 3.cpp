#include<iostream>
using namespace std;
int main()
{
    int a, b, c, largest;
  
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
  
    largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
  
    printf("%d is the largest number.", largest);
  
    return 0;
}
