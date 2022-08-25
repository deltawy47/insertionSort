#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertionSort (vector<int>& arr)
{
int i, j, tmp;

 for (i=1; i<arr.size(); i++)
 {
     j=i;
     tmp=arr[i];
     while (j>0 && tmp<arr[j-1])
     {
           arr[j]=arr[j-1];
           j--;
     }
     arr[j]=tmp;
 }

}

int main()
{
vector<int> vect;
vect.push_back(10);
    vect.push_back(20);
    vect.push_back(56);
     vect.push_back(57);
      vect.push_back(2);
       vect.push_back(1);
insertionSort(vect);
for (int i = 0; i < vect.size(); i++)
      cout << vect[i] << " ";
    return 0;
}
