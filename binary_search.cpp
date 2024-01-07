#include <iostream>
using namespace std;

int binary_search(int array[], int item){
    int low = 0; 
    int high = sizeof(array)/sizeof(int) - 1;

    while(low<=high){
        int mid = low+high/2;
        int guess = array[mid];
        if(guess == item){
            return mid;
        }
        if (guess>item)
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
    

}

int main(){
    int arr[] = {1,3,5,7,9};
    cout<<binary_search(arr,3);
}