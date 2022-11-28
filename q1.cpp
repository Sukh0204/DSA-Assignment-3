// 1) Implement binary search using a recursive method
//Sukhmanpreet Kaur - 19105126
#include <iostream>
using namespace std;
int binarySearch_Helper(int input[], int si, int ei, int element)
{
    if(si>ei){return -1;}
   else{
    int mid=(si+ei)/2;

    if(input[mid]==element){return mid;}
    if(input[mid]>element){return binarySearch_Helper(input, si, mid-1,element);}
    else {return binarySearch_Helper(input,mid+1, ei,element);}
   }
    return -1;
    
}

int binarySearch(int input[], int size, int element) {
    if(size==0){return -1;}
    return binarySearch_Helper(input,0,size-1, element);
}

int main(){
     int length,element, ans;
     cout<<"Input length of Array: "<<endl;
    cin >> length;
    int input[length];
    cout<<"Enter Elements of your Array: "<<endl;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }
    cout<<"Enter element you're looking for: "<<endl;
    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< "Your element is positioned at index number: "<< ans << endl;
}