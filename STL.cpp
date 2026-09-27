#include<bits/stdc++.h>
using namespace std;  

bool comparator(pair<int,int> a,pair<int,int> b){ //function to compare two pairs
    return a.second<b.second; //comparing second element of pair
    if (a.second==b.second){ //if second element is same, compare first element
        return a.first<b.first; //comparing first element of pair
    }
}

int main(){

    //list is a container that allows non-contiguous memory allocation. It is implemented as a doubly linked list, which allows for efficient insertion and deletion of elements from both ends. The list class provides member functions to add, remove, and access elements in the list. It also provides functions to check if the list is empty and to get the size of the list.
    list<int> l={1,2,3,4,5}; //list creation
    cout<<"Size of list is: "<<l.size()<<endl; //size of list

    list<int> l2; //empty list creation
    l2.push_back(1); //adding elements to list
    l2.push_back(2);
    l2.push_front(3); //adding element to front of list
    l2.emplace_back(4); //adding element to back of list
    l2.emplace_front(5); //adding element to front of list
    l2.pop_back(); //removing last element from list
    l2.pop_front(); //removing first element from list
    cout<<"Elements of list l2 are: ";
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<*it<<" "; //printing elements of list
    }
    cout<<endl;
    l2.remove(2); //removing element 2 from list
    cout<<"Elements of list l2 after removing 2 are: ";
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<*it<<" "; //printing elements of list
    }
    cout<<endl;


    //deque is a double-ended queue that allows insertion and deletion of elements from both ends. It is implemented as a dynamic array, which allows for efficient insertion and deletion of elements from both ends. The deque class provides member functions to add, remove, and access elements in the deque. It also provides functions to check if the deque is empty and to get the size of the deque.
    deque<int> d={1,2,3,4,5}; //deque creation
    cout<<"Size of deque is: "<<d.size()<<endl; //size of deque
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" "; //printing elements of deque
    }
    cout<<endl;
    deque<int> dq;
    dq.push_back(30);
    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.pop_back();
    dq.pop_front();
    cout<<"Elements of deque dq are: ";
    for(auto it=dq.begin();it!=dq.end();it++){
        cout<<*it<<" "; //printing elements of deque
    }
    cout<<endl;


    //pair is a container that stores two values of different data types. It is a simple data structure that can be used to store related data together. The pair class provides member functions to access the first and second elements of the pair. It also provides a constructor to initialize the pair with values.
    pair<int,string> p={1,"Kulish"}; //pair creation
    cout<<"First element of pair is: "<<p.first<<endl; //printing first element of pair
    cout<<"Second element of pair is: "<<p.second<<endl; //printing second element of pair
    
    pair<int,pair<int,string>> p2={1,{2,"Kulish"}}; //pair of pair creation
    cout<<"First element of pair of pair is: "<<p2.first<<endl; //
    cout<<"Second element of pair of pair is: "<<p2.second.first<<" "<<p2.second.second<<endl; //printing second element of pair of pair
    vector<pair<int,string>> v={{1,"Kulish"},{2,"jayant"}}; //vector of pairs creation
    
    v.push_back({3,"Rohit"}); //adding element to vector of pairs. Takes an already created pair as input. It is less efficient than emplace_back as it creates a temporary object
    v.emplace_back(4,"Rohit"); //adding element to vector of pairs. Creates inplace object no need to pass inside the curly braces. It is more efficient than push_back as it does not create a temporary object
    //emplace construcrs pair directly in vector
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl; //printing elements of vector of pairs
    }

    //Stack is a container adaptor that gives the functionality of a stack data structure. It is implemented as a LIFO (last-in-first-out) data structure, where elements are added to the top of the stack and removed from the top. The stack class provides member functions to add, remove, and access elements in the stack. It also provides functions to check if the stack is empty and to get the size of the stack.
    stack<int> s; //stack creation
    s.push(1); //adding elements to stack
    s.push(2);
    s.push(3);
    while(!s.empty()){ //checking if stack is empty
        cout<<s.top()<<" "; //printing top element of stack
        s.pop(); //removing top element from stack
    }
    cout<<endl;
    stack<int> s2; //stack creation
    s2.push(1); //adding elements to stack
    s2.push(2);
    s2.push(3);
    cout<<"Size of stack is: "<<s2.size()<<endl; //size of stack
    cout<<"Top element of stack is: "<<s2.top()<<endl; //printing top element of stack
    s2.pop(); //removing top element from stack
    cout<<"Top element of stack after pop is: "<<s2.top()<<endl; //printing

    s2.swap(s); //swapping two stacks
    cout<<"Is s2 empty afetr swapping? "<<s2.empty()<<endl; //checking if stack is empty
    cout<<s2.size()<<endl; //printing size of stack
    cout<<s.size()<<endl; //printing size of stack

    //queue is a container adaptor that gives the functionality of a queue data structure. It is implemented as a FIFO (first-in-first-out) data structure, where elements are added to the back of the queue and removed from the front. The queue class provides member functions to add, remove, and access elements in the queue. It also provides functions to check if the queue is empty and to get the size of the queue.
    queue<int> q; //queue creation
    q.push(1); //adding elements to queue
    q.push(2);
    q.push(3);
    cout<<"Size of queue is: "<<q.size()<<endl; //size of queue
    cout<<"Front element of queue is: "<<q.front()<<endl; //printing front element
    cout<<"Back element of queue is: "<<q.back()<<endl; //printing back element of queue
    q.pop(); //removing front element from queue
    cout<<"Front element of queue after pop is: "<<q.front()<<endl; //printing front element
    while(!q.empty()){ //checking if queue is empty
        cout<<q.front()<<" "; //printing front element of queue
        q.pop(); //removing front element from queue
    }
    cout<<endl;
    
    queue<int> q2; //queue creation
    q2.push(10); //adding elements to queue
    q2.push(20);
    q2.push(30);
    q2.swap(q); //swapping two queues
   cout<<"Size of queue q2 after swapping is: "<<q2.size()<<endl; //size of queue
   cout<<"Size of queue q after swapping is: "<<q.size()<<endl; //size
   
    cout<<"elements of queue q after swapping are: ";
    while(!q.empty()){ //checking if queue is empty
        cout<<q.front()<<" "; //printing front element of queue
        q.pop(); //removing front element from queue
    }
    cout<<endl;

    //priority queue is a container adaptor that provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction. A priority queue is implemented as a max heap by default, but can be implemented as a min heap by using greater<int> as the third template parameter.
    priority_queue<int> pq; //priority queue creation
    pq.push(10); //adding elements to priority queue
    pq.push(20);
    pq.push(5);
    while(!pq.empty()){ //checking if priority queue is empty
        cout<<pq.top()<<" "; //printing top element of priority queue
        pq.pop(); //removing top element from priority queue
    }
    cout<<endl; 
    priority_queue<int,vector<int>,greater<int>> pq2; //min priority queue creation
    pq2.push(10); //adding elements to priority queue
    pq2.push(20);
    pq2.push(5);
    while(!pq2.empty()){ //checking if priority queue is empty
        cout<<pq2.top()<<" "; //printing top element of priority queue
        pq2.pop(); //removing top element from priority queue
    }
    cout<<endl;


    //map is a collection of key-value pairs where each key is unique and maps to a single value. It is implemented as a balanced binary search tree, which allows for efficient insertion, deletion, and lookup operations. The keys in a map are ordered, which means that they are stored in a sorted order based on their values. This allows for efficient searching and retrieval of values based on their keys.
    map<string,int> m; //map creation
    m["TV"]=100;
    m["AC"]=200;
    m["Fan"]=50;
    m["Headphones"]=30;
    cout<<"Size of map is: "<<m.size()<<endl; //size of map
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl; //printing elements of map
    }
    m.insert({"Laptop",500}); //inserting element in map
    m.emplace("Mobile",300); //inserting element in map
    cout<<"Elements of map after inserting Laptop are: ";
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl; //printing elements of map
    }
    cout<<"Number of elements with key 'Fan' in map is: "<<m.count("Fan")<<endl; //counting number of elements with key "Fan" in map
    cout<<m["AC"]<<endl; //printing value of key "AC" in map
    m.erase("Headphones"); //erasing element with key "Headphones" from map
    cout<<"Elements of map after erasing Headphones are: ";
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl; //printing elements of map
    }
   if(m.find("Laptop")==m.end()){ //finding element with key "Laptop" in map
        cout<<"Element with key 'Laptop' not found in map"<<endl;
    }
    else{
        cout<<"Element with key 'Laptop' found in map"<<endl;
    }
    cout<<m.find("Laptop")->second<<endl; //finding element with key "Laptop" in map and printing its value
    //

    //Multimap is similar to map but it can store multiple values for the same key
    multimap<string,int> mm; //multimap creation
    mm.insert({"TV",100});
    mm.insert({"AC",200});
    mm.insert({"Fan",50});
    mm.insert({"TV",150}); //inserting element with same key in multimap
    cout<<"Elements of multimap with key 'TV' are: "<<mm.count("TV")<<endl; //counting number of elements with key "TV" in multimap
    cout<<"Size of multimap is: "<<mm.size()<<endl; //size of multimap
    for(auto it=mm.begin();it!=mm.end();it++){
        cout<<it->first<<" "<<it->second<<endl; //printing elements of multimap
    }
    mm.erase(mm.find("TV")); //erasing element with key "TV" from multimap
    cout<<"Elements of multimap after erasing TV are: ";
    for(auto it=mm.begin();it!=mm.end();it++){
        cout<<it->first<<" "<<it->second<<endl; //printing elements of multimap
    }

    //unordered_map is similar to map but it stores elements in random order and it is implemented using hash table. It provides average case O(1) time complexity for insertion, deletion and search operations.
    unordered_map<string,int> um; //unordered_map creation
    um["TV"]=100;
    um["AC"]=200;
    um["Fan"]=50;
    um["Headphones"]=30;
    cout<<"Size of unordered_map is: "<<um.size()<<endl; //size of unordered_map
    for(auto it=um.begin();it!=um.end();it++){
        cout<<it->first<<" "<<it->second<<endl; //printing elements of unordered_map
    }

    //SET is a container that stores unique elements in a specific order. It is implemented as a balanced binary search tree, which allows for efficient insertion, deletion, and lookup operations. The elements in a set are ordered, which means that they are stored in a sorted order based on their values. This allows for efficient searching and retrieval of values based on their keys.
    set<int> s1; //set creation
    s1.insert(10); //inserting elements in set
    s1.insert(20);
    s1.insert(30);
    cout<<"Size of set is: "<<s1.size()<<endl; //size of set
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<*it<<" "; //printing elements of set
    }
    s1.insert(20); //inserting duplicate element in set
    cout<<endl;
    cout<<"Size of set after inserting duplicate element is: "<<s1.size()<<endl; //size of set
    s1.erase(20); //erasing element from set
    cout<<"Size of set after erasing element is: "<<s1.size()<<endl;
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<*it<<" "; //printing elements of set
    }

    set<int> set2={1,2,3,4,5}; //set creation with initialization
  
    cout<<"Lower bound of 3 in set2: "<<*set2.lower_bound(3)<<endl; //finding lower bound of element in set
    cout<<"Upper bound of 3 in set2: "<<*set2.upper_bound(3)<<endl; //finding upper bound of element in set

    //multiset is similar to set but it can store multiple values for the same key
    multiset<int> ms; //multiset creation
    ms.insert(10); //inserting elements in multiset
    ms.insert(20);
    ms.insert(30);
    ms.insert(20); //inserting duplicate element in multiset
    cout<<"Size of multiset is: "<<ms.size()<<endl; //size of mult
    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" "; //printing elements of multiset
    }
    cout<<endl;


    //unordered_set is similar to set but it stores elements in random order and it is implemented using hash table. It provides average case O(1) time complexity for insertion, deletion and search operations.
    unordered_set<int> us; //unordered_set creation
    us.insert(10); //inserting elements in unordered_set
    us.insert(20);
    us.insert(30);
    cout<<"Size of unordered_set is: "<<us.size()<<endl; //size of unordered_set
    for(auto it=us.begin();it!=us.end();it++){
        cout<<*it<<" "; //printing elements of unordered_set
    }
    cout<<endl;

    //sort algorithm is used to sort the elements of a container in ascending order. 
    // It is implemented using the quicksort algorithm, which has an average case time complexity of O(n log n). 
    // The sort function takes two iterators as input, which define the range of elements to be sorted. 
    // It also takes an optional third parameter, which is a comparison function that defines the sorting order.

    int arr[]={5,4,3,2,1}; //array creation
    sort(arr,arr+5); //sorting array in ascending order
    cout<<"Elements of array after sorting are: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "; //printing elements of array after sorting
    }
    cout<<endl;

    vector<int> v1={5,4,3,2,1}; //vector creation
    sort(v1.begin(),v1.end()); //sorting vector in ascending order
    cout<<"Elements of vector after sorting are: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" "; //printing elements of vector after sorting
    }
    cout<<endl;

    sort(v1.begin(),v1.end(),greater<int>()); //sorting vector in descending order
    cout<<"Elements of vector after sorting in descending order are: "; 
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" "; //printing elements of vector after sorting in descending order
    }
    cout<<endl;

    vector<pair<int,int>> vp={{1,2},{5,4},{3,6},{2,4}}; //vector of pairs creation
    sort(vp.begin(),vp.end()); //sorting vector of pairs in ascending order based on first el;ement of pair
    cout<<"Elements of vector of pairs after sorting are: ";
    for(int i=0;i<vp.size();i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl; //printing elements of vector of pairs after sorting
    }
    cout<<endl;

    //custom sorting of vector of pairs based on second element of pair
    sort(vp.begin(),vp.end(),comparator); //sorting vector of pairs in ascending order based on second element of pair
    cout<<"Elements of vector of pairs after custom sorting are: ";
    for(int i=0;i<vp.size();i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl; //printing elements of vector of pairs after custom sorting
    }

    //reverse algorithm is used to reverse the elements of a container. It is implemented using the two-pointer technique, which has a time complexity of O(n). The reverse function takes two iterators as input, which define the range of elements to be reversed.
    reverse(v1.begin(),v1.end()); //reversing vector
    cout<<"Elements of vector after reversing are: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" "; //printing elements of vector after reversing
    }
    cout<<endl;

    //next_permutation algorithm is used to generate the next lexicographically greater permutation of a container. It is implemented using the two-pointer technique, which has a time complexity of O(n). The next_permutation function takes two iterators as input, which define the range of elements to be permuted.
    string str="abc"; //string creation
    next_permutation(str.begin(),str.end()); //generating next permutation of string
    cout<<"Next permutation of string is: "<<str<<endl; //printing next permutation of string
    next_permutation(str.begin(),str.end()); //generating next permutation of string
    cout<<"Next permutation of string is: "<<str<<endl; //printing next permutation of string
    
    return 0;


}