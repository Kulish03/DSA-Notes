#include <iostream>
using namespace std;
void changeArray(int arr[],int size){ //function to change array values
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2; //changing array values
    }
}
void reverse(int arr[],int size){ //function to reverse array values
   int start=0; //starting index
   int end=size-1; //ending index
   while(start<=end){
         swap(arr[start],arr[end]); //swapping values at start and end index
          start++; //incrementing start index
          end--; //decrementing end index
     }
}
int main(){
    //array creation
    int arr[5]={1,2,3,4,5}; //can also be created like this int arr[]; and then assign values to it
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int size=sizeof(arr)/sizeof(arr[0]); //size of array
    cout<<"Size of array is: "<<size<<endl;

    int arr2[5]={3,22,13,44,55}; //array creation with initialization
    int max=INT_MIN; //initializing max with minimum value
    for(int i=0;i<5;i++){
        if(arr2[i]>max){
            max=arr2[i];
        }
    }
    cout<<"Maximum element in array is: "<<max<<endl;
    int min=INT_MAX; //initializing min with maximum value}
    for(int i=0;i<5;i++){
        if(arr2[i]<min){
            min=arr2[i];
        }
    }
    cout<<"Minimum element in array is: "<<min<<endl;
    //smallest can also be found using min(1st element,2nd element) and max can be found using max(1st element,2nd element)

    //passing array to function; Pass by reference is used to change the values of array in function
    int arr3[5]={1,2,3,4,5};
    changeArray(arr3,5); //passing array to function
    for(int i=0;i<5;i++){
        cout<<arr3[i]<<" "; //printing changed array values
    }
    cout<<endl;

    //Linear search in array
    int target=10; //target value to find in array
    bool found=false; //flag to check if target is found
    for(int i=0;i<5;i++){
        if(arr3[i]==target){
            found=true; //if target is found, set flag to true
            break; //exit loop
        }
    }
    if(found){
        cout<<"Target found in array"<<endl;
    }
    else{
        cout<<"Target not found in array"<<endl;
    }

    //reversing an array
    int arr4[5]={1,2,3,4,5};
    reverse(arr4,5); //reversing array using reverse function from algorithm library
    for(int i=0;i<size;i++){
          cout<<arr4[i]<<" "; //printing reversed array values
     }
     cout<<endl;
    return 0;
}