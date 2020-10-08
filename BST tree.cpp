#include<iostream>
#include<conio.h>
using namespace std;
struct tree
 {
  int data;
  tree *left;
  tree *right;
 }*sptr,*q;
  void rightcheck();
  void leftcheck();
  void search();
 
  int data;
  tree *node;
  void main()
   {
    system("cls");;
    node=new tree;
    cout<<"Enter Root:";
    cin>>node->data;
    sptr=node;
    q=sptr;
    node->left=NULL;
    node->right=NULL;
    cout<<"Enter child:";
    cin>>data;
    search();
    while(data!=0)
    {
     if(data>sptr->data)
        rightcheck();
     else
        leftcheck();
        cout<<"Enter child:";
        cin>>data;
        search();
        sptr=node;
       }
      _getch();
      }
     void rightcheck()
       {
     if(sptr->right==NULL)
       {
        cout<<data<<" is Right child of "<<q->data<<endl;
        sptr->right=new tree;
        sptr=sptr->right;
        sptr->data=data;
        sptr->left=NULL;
        sptr->right=NULL;
        q=node;
       }
     else
        {
         if(data>sptr->data)
          {
           sptr=sptr->right;
           q=sptr;
           if(data>sptr->data)
        rightcheck();
        else
        leftcheck();
         }
         else
          {
        sptr=sptr->left;
        q=sptr;
        leftcheck();
          }
         }
    }
    void leftcheck()
    {
         if(sptr->left==NULL)
          {
           cout<<data<<" is Left child of "<<q->data<<endl;
           sptr->left=new tree;
           sptr=sptr->left;
           sptr->data=data;
           sptr->right=NULL;
           sptr->left=NULL;
           q=node;
          }
     else{
         if(data<sptr->data)
          {
        sptr=sptr->left;
        q=sptr;
        if(data>sptr->data)
        rightcheck();
        else
        leftcheck();
          }
         else
          {
        sptr=sptr->right;
        q=sptr;
        rightcheck();}
          }
    }
 
    void search()
    {
       sptr=node;
       while(sptr!=NULL)
    {
      if(data==sptr->data)
        {
        cout<<"This is not insertable.\nyou have it!\n";
        cout<<"Enter new child:";
        cin>>data;
        search();
        break;
        }
      else
      {
        if(data>sptr->data)
        sptr=sptr->right;
        else
        sptr=sptr->left;
     }
       }
     sptr=node;
 
       }

