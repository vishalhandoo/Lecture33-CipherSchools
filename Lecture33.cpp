#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size -top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"The stack is already full"<<endl;
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"The stack is empty"<<endl;
        }
    }
    void peek(){
        if(top>=0){
            cout<<"The top elemet is : "<<arr[top]<<endl;
        }
        else{
            cout<<"No element present"<<endl;
        }
    }
    void isEmpty(){
        if(top<0){
            cout<<"The stack is currently empty"<<endl;

        }
        else{
            cout<<"Stack is NOT EMPTY"<<endl;
        }
    }

};

int main(){
    
    Stack new_stack(5);
    new_stack.push(10);
    new_stack.push(5);
    new_stack.push(15);
    new_stack.push(20);
    new_stack.push(25);
    new_stack.peek();
    new_stack.pop();
    new_stack.push(0);
    new_stack.peek();

    return 0;
}