#include <iostream>
using namespace std;

class node{
public:
int data;
node *next;
};

class linked{
private:
node *head, *tail;
public:

void add(int x){
node *temp=new node;
temp->data=x;

if(head==NULL){
head=temp;
tail=temp;
}
else
{
tail->next=temp;
tail=temp;
}
}

int count(){
node *tmp=head;
int c=0;



while(tmp!=NULL){
c++;
tmp=tmp->next;
}
return c;
}

void reverse(){
int c=count();
for(int i=1; i<=((int)(c/2)); i++){

node *t=new node;
node *t1=head;
node *t2=head;

for(int j=1; j<i; j++){
t1=t1->next;
}

for(int k=1; k<=(c-i); k++){
t2=t2->next;
}

t->data=t1->data;
t1->data=t2->data;
t2->data=t->data;

}

display();

}

void display(){
node *tm =new node;
tm=head;
while(tm!= NULL){
cout<< tm->data << " -> ";
tm=tm->next;
}
cout<< "NULL\n";

}

};


int main(){
linked ob;
ob.add(1);
ob.add(2);
ob.add(3);
ob.add(4);
ob.add(5);
ob.display();
//cout<<"The reverse is \n";
//ob.reverse();
return 0;
}
