#include<iostream>
#include<algorithm>
using namespace std;
struct Node{
    int val;
    Node* next;
};

class singlyLinkedList{
    private:
        Node* head;
        int size;
    public:
        singlyLinkedList(): head(nullptr), size(0){}
           
        void insertBegining(int val){
            Node* newNode=new Node(val);
            newNode->next=head;
            head=newNode;
            size++;
        }
        void insertEnd(int val){
            Node* newNode=new Node(val);
            if(!head){
                head=newNode;
                size++;
                return;
            }
            Node* temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=newNode;
            size++;
        }
        void deleteBegining(){
            if(!head){
                cout<<"List is empty"<<'\n';
                return;
            }
            Node* temp=head;
            head=head->next;
            delete temp;
            size--;
        }
        void deleteEnd(){
                if (!head) {
        cout << "List is empty\n";
        return;
    }
    
    if (!head->next) {              // Only one node case
        delete head;
        head = nullptr;
        size--;
        return;
    }
    
    Node* temp = head;
    while (temp->next->next) {      // Traverse to second last node
        temp = temp->next;
    }
    delete temp->next;              // Delete last node
    temp->next = nullptr;           // Set new last node's next to null
    size--;
        }
};

int main() {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
    


    return 0;
}