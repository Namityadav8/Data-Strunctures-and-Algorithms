#include<iostream>
using namespace std ;













void printQueue(){
    if(front==nullptr){
        cout<<"Queue is empty ";
    }else{
        Node* current = front;
        cout<<"queue is : ";
        cout<<"Priority of element";
        while(current!=null){
            cout<<current->priority<<" "<< current->data;
            current= current->next;
        }
    }
}

int main(){

    int choice;
    priorityqueue pq;
    do{
        cout<<"1). Insert the element into the queue ";
        cout<<"2). Deleted element from the queue is: ";
        cout<<"3). The element of the queue are as: ";
        cout<<"3). Exit";
        cout<<"Enter the choice : ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Input the elements / item to add into the queue: ";
            cin>>item;
            cout<<"Enter the priority of element";
            cin>>priority;
            pq.insertqueue
        }

    }

}



















