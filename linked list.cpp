#include<iostream>
using namespace std;

struct node{
	int num;
	node*next;
};

class queue{
	node*front,*rear;
	public:
	queue(){
		rear=NULL;
		front=NULL;
	}

		void insert()
		{
			node*temp;
			temp=new node;
			cout<<"enter data"<<"\n";
			cin>>temp->num;
			temp->next=NULL;
			if(rear=NULL)
			{
				front=temp;
				rear=temp;
				
			}
			else
			{
			   rear->next=temp;
			   rear=temp;
			}
			
		}
	void deleteNode(struct Node **head_ref, int key) 
{ 
    // Store head node 
    struct Node* temp = *head_ref, *prev; 
  
    // If head node itself holds the key to be deleted 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 
}
	
bool search(Node* head, int x)  
{  
    Node* current = head; // Initialize current  
    while (current != NULL)  
    {  
        if (current->key == x)  
            return true;  
        current = current->next;  
    }  
    return false;  
}  
		
		
	
};

int main()
{
	queue stud;
	stud.insert();
	
	search(head, 33)? cout<<"Yes" : cout<<"No";  
        return 0;  
}
