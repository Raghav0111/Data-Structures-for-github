// Push O(1) and pop O(N)

// #include<bits/stdc++.h>

// using namespace std;

// class Queue{
//     stack<int>s1;
//     stack<int>s2;
//     public:
//     void push(int x){
//         s1.push(x);
//     }
//     int pop(){
//         if(s1.empty() && s2.empty()){
//             return -1;
//         }
//         if(s2.empty()){
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int topval = s2.top();
//         s2.pop();
//         return topval;
//     }
//     bool empty(){
//         if(s1.empty() and s2.empty()){
//             return true;
//         }
//         return false;
//     }
// };

// int main(){
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);

//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
// }

// More optimised approach

#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int>s1;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty()){
            cout<<"Queue is Empty\n";
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
    }
    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }

};


