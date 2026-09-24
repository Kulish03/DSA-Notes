#include<bits/stdc++.h>
using namespace std;    
int main(){
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

    priority_queue<int> pq; //priority queue creation
    pq.push(10); //adding elements to priority queue
    pq.push(20);
    pq.push(5);
    while(!pq.empty()){ //checking if priority queue is empty
        cout<<pq.top()<<" "; //printing top element of priority queue
        pq.pop(); //removing top element from priority queue
    }
    return 0;   
}
