#include<iostream>
using namespace std;

int seqSearch(int array[], int size, int val )
{
  
  int i;
  
  for ( i=0 ; i<size ; i++ )
  {
      if ( array[i]==val )
      {
          return 1; // element is found
      }
  }
  return 0; // the element (val) is not found
}

void main()
{

  int size;
  int element;
  int array[1024];
  
  cout << "\n Enter the array size :" ;
  cin >> size ;
  
  for ( int i=0 ; i<size ; i++)
    cin >> array[i] ;
    
  cout << "\n Enter the element to be searched:" ;
  cin >> element ;
  
  int flag=seqSearch(array, size, element);
  
  if(flag)
    cout << "Element Found!!!!" ;
  else
    cout << "Element not Found!!!!" ;
  
}
