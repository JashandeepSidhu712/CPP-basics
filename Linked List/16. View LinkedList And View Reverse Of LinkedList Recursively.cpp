#include<iostream>
using namespace std;

class Node
{
    public:
    
    int info;
    Node* next;
};
class LinkedList
{
    Node* head;
    
    public:
    
    LinkedList()
    {
        head = NULL;
    }
    
    void addNode(int value)
    {
        Node* newnode = new Node();
        
        newnode->info = value;
        newnode->next = NULL;
        
        if(head==NULL)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            Node* ptr = head;
            
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            
            ptr->next = newnode;
        }
    }
    
    void List()
    {
        ShowLinkedList(head);
        
        cout<<endl;
    }
    
    void ShowLinkedList(Node* ptr)
    {
        if(ptr==NULL)
        return;
        
        cout<<ptr->info<<" ";
        ShowLinkedList(ptr->next);
    }
    
    void ReverseList()
    {
        ShowReverseLinkedList(head);
    }
    
    void ShowReverseLinkedList(Node* ptr)
    {
        if(ptr==NULL)
        return;
        
        ShowReverseLinkedList(ptr->next);
        cout<<ptr->info<<" ";
    }
    
    void showList()
    {
        Node* ptr = head;
        
        while(ptr!=NULL)
        {
            cout<<ptr->info<<"->";
            ptr=ptr->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main()
{
    LinkedList obj;
    
    obj.addNode(10);
    obj.addNode(20);
    obj.addNode(30);
    obj.addNode(40);
    
    obj.showList();
    
    obj.List();
    
    obj.ReverseList();
}
