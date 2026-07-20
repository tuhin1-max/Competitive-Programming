class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
class MyLinkedList {
public:
    Node* head;
    int sz;
    MyLinkedList() {
        head = NULL;
        sz = 0;
    }
    
    int get(int index) {
        if(index <= -1 || index >= sz){
            return -1;
        }
        Node* temp = head;
        for(int i=0;i<index;i++){
            temp = temp->next;
        }

        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
        sz++;
    }
    
    void addAtTail(int val) {
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            sz++;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        sz++;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
        }
        else if(index == sz){
            addAtTail(val);
        }
        else{
            if(index <= -1 || index >= sz){
                return;
            }

            Node* newnode = new Node(val);
            Node* temp = head;
            for(int i=0;i<index-1;i++){
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            sz++;

        }
    }
    
    void deleteAtIndex(int index) {
        if(index <= -1 || index >= sz){
            return;
        }
        if(index == 0) {
            Node* deletenode = head;
            head = head->next;
            delete deletenode;
            sz--;
            return;
        }
        Node* temp=head;
        for(int i=0;i<index-1;i++){
            temp = temp ->next;
        }
        Node* deletenode = temp->next;
        temp->next = temp->next->next;
        delete deletenode;
        sz--;
    }
};
