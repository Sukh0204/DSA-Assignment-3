// 2) Implement merge sort by taking user input
// Sukhmanpreet-Kaur 19105126

#include <iostream>
using namespace std;
void merge(int input[], int si, int ei)
{
    if(si>=ei){return ;}
    int mid=(si+ei)/2;
    int k=ei-si+1;
    int arr[k];
    int i=si;
    int j=mid+1;
    int m=0;
    while(i<=mid && j<=ei)
    {
        if(input[i]<input[j])
        {
            arr[m]=input[i]; i++; m++;
        }
     else if(input[i]>=input[j])
        {
            arr[m]=input[j]; j++; m++;
        }
    }
    while(i<=mid)
    {
        arr[m]=input[i]; i++; m++;
    }
    while(j<=ei)
    {
        arr[m]=input[j]; j++; m++;
    }
    for(int a=si, b=0; a<=ei; a++,b++)
    {
       input[a]=arr[b];
    }
    return ;
}

void mergesort_helper(int input[],int si, int ei)
{
    if(si>=ei){return ;}
    int mid=(si+ei)/2;
    mergesort_helper(input, si, mid);
    mergesort_helper(input, mid+1, ei);
    merge(input, si, ei);
    return ;
}

void mergeSort(int input[], int size){
        if(size<=1){return ;}
    mergesort_helper(input, 0, size-1);
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}