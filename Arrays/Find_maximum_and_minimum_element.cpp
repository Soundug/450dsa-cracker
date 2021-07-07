//Problem link: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
//Time complexity: O(N)


#include <iostream>
using namespace std;

struct Pair
{
    int min;
	int max;
};

struct Pair getMinimumAndMax(int arr[], int n)
{
    int i;
    struct Pair minmax;
    
    //if there is only one element in
    //array, print same as min and max
    if(n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    
    //if there are more than one elements
    //in the array,
    if(arr[0] > arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    
    //traverse the elements in array
    //check if min and max are greater than a[i]
    for(int i=2; i<n; i++)
    {
        if(arr[i] > minmax.max){
            minmax.max = arr[i];
        }
        else if(arr[i] < minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}

int main() {
    int arr[] = {2, 3, 1, 11, 9, 7};
	int arr_size = 6;
	
	struct Pair minmax = getMinimumAndMax(arr, arr_size);
	
	cout << "Minimum element is "<< minmax.min << endl;
    cout << "Maximum element is "<< minmax.max;
	
	return 0;
}

//
//Time complexity: O(N)
#include<iostream>
using namespace std;
 
// structure is used to return
// two values from minMax()
struct Pair
{
    int min;
    int max;
};

struct Pair getMinimumAndMaximum(int arr[], int low, int high)
{
    struct Pair minmax, mml, mmr;
    int mid;
    
    //if there is only one element in array 
    if(low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }
    
    //if there are more than one elements
    if(high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }
    
    //If there are more than two elements
    mid = (low + high) / 2;
    mml = getMinimumAndMaximum(arr, low, mid);
    mmr = getMinimumAndMaximum(arr, mid + 1, high);
    
    //Comparing minimum of two pairs
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;
        
    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;    
     
    return minmax;
}

int main()
{
    int arr[] = {2, 3, 1, 11, 9 , 7};
    int arr_size = 6;
    
    struct Pair minmax = getMinimumAndMaximum(arr, 0, arr_size - 1);
    
    cout<<"Minimum element is "<<minmax.min<<endl;
    cout<<"Maximum element is "<<minmax.max<<endl;
    
    return 0;
}
