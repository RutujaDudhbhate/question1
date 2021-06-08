#include<iostream>
using namespace std; 
 
void Smallest(int arr[], int arr_size)
{
    int i, s1, s2;
 
    
    if (arr_size < 2)
    {
        cout<<" Invalid Input ";
        return;
    }
 
    s1 = s2 = INT_MAX;
    for (i = 0; i < arr_size ; i ++)
    {
        
        if (arr[i] < s1)
        {
            s2 = s1;
            s1 = arr[i];
        }
 
       
        else if (arr[i] < s2 && arr[i] != s1)
            s2 = arr[i];
    }
    if (s2 == INT_MAX)
        cout << "There is no second smallest element\n";
    else
        cout << "The smallest element is " << s1 << " and s2 "
            "Smallest element is " << s2 << endl;
}
 

int main()
{
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    Smallest(arr, n);
    return 0;
}
 
