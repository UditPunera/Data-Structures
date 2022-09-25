#include<bits/stdc++.h>
using namespace std;

struct node{
    string name;
    int age;
    node *next;
    node *prev;
    node(string s,int x){
        name = s;
        age = x;
        next = NULL;
        prev = NULL;
    }
};

void printlist(node *head){
    while(head!=NULL){
        cout<<head->name<<" "<<head->age<<" - ";
        head = head->next;
    }
    cout<<"NULL";

}



int main(){

    node *father = new node("Mahesh Chandra Punera",49);
    node *mother = new node("Urmila Punera",47);
    node *myself = new node("Udit Punera",18);
    node *sister = new node("Akshita Punera",16);
   

    node *head = father ;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=myself;
    myself->prev=mother;
    myself->next=sister;
    sister->prev=myself;

    sister->next=NULL;
    


    printlist(head);
    return 0;
}
