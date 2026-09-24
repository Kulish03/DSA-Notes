#include <iostream>
#include <vector>
using namespace std;    
int main(){
    vector<int> v={1,2,3,4,5}; //vector creation
    cout<<"Size of vector is: "<<v.size()<<endl; //size of vector
    vector<int> v2(3,10); //empty vector creation with 3 elements, each initialized to 10
    vector<int> v3; //empty vector creation
    v3.push_back(1); //adding elements to vector
    v3.push_back(2);
    v3.push_back(3);
    cout<<"Elements of vector v3 are: ";
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" "; //printing elements of vector
    }
    cout<<endl;
    v3.pop_back(); //removing last element from vector
    cout<<"Elements of vector v3 after pop_back are: "; 
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" "; //printing elements of vector after pop_back
    }
    cout<<endl;
    cout<<"First element of vector v3 is: "<<v3.front()<<endl; //printing first element of vector
    cout<<"Last element of vector v3 is: "<<v3.back()<<endl; //printing last element of vector
    cout<<"Capacity of vector v3 is: "<<v3.capacity()<<endl; //printing capacity of vector
    cout<<v3.at(1)<<endl; //printing element at index 1 of vector
    


    vector<int> v4={1,2,3,4,5}; //vector creation


    v4.clear(); //clearing vector
    cout<<"is vector empty? "<<v4.empty()<<endl;
    v4.push_back(1); //adding elements to vector
    v4.push_back(2);
    v4.push_back(3);
    v4.insert(v4.begin()+1,10); //inserting 10 at index 1
    cout<<"Elements of vector v4 after inserting 10 at index 1 are: ";  
    for(int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
    cout<<endl;
    return 0;
}