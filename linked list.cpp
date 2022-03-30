//
//  main.cpp
//  linkedlist
//
//  Created by Divyansh Chauhan on 20/02/22.
//

#include <iostream>
using namespace std;

//class node{
//public:
//
//    int data;
//    node*next;
//
//    node(int d)
//    {
//        data=d;
//        next=NULL;
//    }
//};
//
//void insertattail(node*&head,node*&tail,int data)
//{
//    node*n=new node(data);
//    //if ll is empty
//    if(head==NULL)
//    {
//    head=n;
//    tail=n;
//    }
//
//    //when not empty
//    tail->next=n;
//    tail=n;
//}
//
//void printll(node*head)
//{
//    while(head!=NULL)
//    {
//    cout<<head->data<<"-->";
//    head=head->next;
//
//    }
//    cout<<endl;
//}
//
//
//void append(node*&head,node*&tail,int k,int n)
//{
//    node*jump=head;
//    for(int i=1;i<n-k;i++)
//    {
//        jump=jump->next;
//    }
//
//    tail->next=head;
//    head=jump->next;
//    jump->next=NULL;
//    tail=jump;
//
//}

//int main()
//{
//    node*head=NULL;
//    node*tail=NULL;
//
//    int n;
//    cin>>n;
//
//    for(int i=0;i<n;i++)
//    {
//        int data;
//        cin>>data;
//        insertattail(head,tail,data);
//    }
//
//    int k;
//    cin>>k;
//    k=k%n;
//
//    printll(head);
//
//    append(head,tail,k,n);
//
//    printll(head);
//}


//int fib(int n)
//{
//    //base case
//    if(n==0 || n==1)
//    {return n;}
//
//    //recursive case
//    return fib(n-1)+fib(n-2);
//}
//
//
//
//int main()
//{
//    int n;
//    cin>>n;
//    cout<<fib(n);
//    int *arr=new int[n+1];
//}
//

//Q minimum steps to reach 1

//int minop(int n,int *arr)
//{
//    //base case
//    if(n==1)
//    {
//        return 0;
//    }
//
//
//    //recursive case
//
//    int op1=INT_MAX;
//    int op2=INT_MAX;
//    int op3=INT_MAX;
//
//    //calculation
//    if(arr[n]!=-1)
//    {
//        return arr[n];
//
//    }
//
//    op1=minop(n-1,arr);
//
//    if(n%2==0)
//    {
//        op2=minop(n/2,arr);
//
//    }
//
//    if(n%3==0)
//    {
//        op3=minop(n/3,arr);
//
//    }
//
//    return arr[n]=(min(op1,min(op2,op3)))+1;
//}
//
//
//
//int main()
//{
//    int n;
//    cin>>n;
//    int*arr=new int[n+1];
//    for (int i=0;i<=n;i++)
//    {
//        arr[i]=-1;
//    }
//
//    minop(n,arr);
//
//}


//int moneymax(int *arr,int n,int i, int sum)
//{
//    //base case
//    if(i==n || i==0)
//    {
//        return sum;
//    }
//
//    //recursive case
//     sum=sum+max(arr[i],max(moneymax(arr,n,i-1,sum),moneymax(arr,n,i+1,sum)));
//
//    return sum;
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[n];
//    }
//
//   cout<< moneymax(arr,n,1,0);
//
//
//}

int wine(int *arr, int i, int j, int year)
{
    
    //base case
    if(i>j)
    {
        return 0;
    }
    
    //recursive case

    int profit1= arr[i]*year+wine(arr,i+1,j,year+1);
    int profit2= arr[j]*year+wine(arr,i,j-1,year+1);
    return max(profit1,profit2);
    
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    
    cout<<wine(arr,0,n-1,1);
    
    
}
