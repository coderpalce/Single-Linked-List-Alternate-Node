#include<iostream>
using namespace std;

struct NODE{
    int data;
    NODE *next;
};

int main(){
    int i;
    NODE *head=NULL;
    NODE *temp,*ptr;
    for(i=1;i<=10;i++){
        ptr= new NODE;
        //int num;
        //cin>>num;
        ptr->data=i;
        ptr->next=NULL;

        if(head==NULL){
            head=ptr;
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
        }


    }
    temp=head;
    cout<<"original Link LIst: ";
    while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;

    }
    cout<<endl;
    cout<<"\n\nAlternate Link List: ";
    temp=head;
    int count=0;
    while(temp !=NULL){
            if(count%2==0){
                cout<<temp->data<<"->";
            }
            count++;
            temp=temp->next;

    }



    cout<<endl;
    return 0;

}
