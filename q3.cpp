// 3) Compare Selection sort and Bubble Sort based on the following:
// a. Number of comparisons
// b. Number of swaps
// All the comparisons should be made through coding implementations.
// Sukhmanpreet-Kaur 19105126

#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n){
    int numSwaps = 0, numComparisons = 0 ;
    for(int i=0; i<n; i++)
    {
       
        for(int k=0; k+1<n-i; k++)
        { int temp= arr[k];
        numComparisons++;
            if(arr[k]>arr[k+1])
            {
                arr[k]=arr[k+1];
                arr[k+1]=temp;
                numSwaps++;
            }
        }
    }
     cout<<"Number of Comparisons and swaps in Bubble Sort is: " <<numComparisons <<" and "<<numSwaps<< "respectively"<<endl;   

}

void selectionSort(int input[], int n) {
    int numSwaps = 0, numComparisons = 0 ;
	for(int i = 0; i < n-1; i++ ) {
	// Find min element in the array
	int min = input[i], minIndex = i;
	for(int j = i+1; j < n; j++) {
        numComparisons++;
		if(input[j] < min) {
			min = input[j];
			minIndex = j;
		}
	}
	// Swap
	int temp = input[i];
	input[i] = input[minIndex];
	input[minIndex] = temp;
    numSwaps++;
	}
    cout<<"Number of Comparisons and swaps in Selection Sort is: " <<numComparisons <<" and "<<numSwaps<< "respectively"<<endl;
}
//Number of Comparisons in both cases will be same
//ALthough number of Swaps will be lesser in Selection sort for avg case scenrio 
// For a sorted array, no swaps are required for bubble sort 
// compare this to a completely unsorted or sorted in descending order
// Bubble sort has higher number of swaps 
// Same is illustrated through the code
int main()
{
		int size;
		cin >> size;

		int *input1 = new int[size];
        int *input2 = new int[size];

		for (int i = 0; i < size; ++i)
		{
            int element;
			cin >> element;
            input1[i] = input2[i] = element;
		}

		BubbleSort(input1, size);
        selectionSort(input2, size);

        cout<<"result of Bubble sort is: "<<endl;
		for (int i = 0; i < size; ++i)
		{
			cout << input1[i] << " ";
		}
        cout<<endl;

        cout<<"result of Selection sort is: "<<endl;
		for (int i = 0; i < size; ++i)
		{
			cout << input2[i] << " ";
		}
        cout<<endl;

		
}
