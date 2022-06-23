class MyLinkedList {
public:
     MyLinkedList* head;
    MyLinkedList* next;
    int val;
    MyLinkedList() {
          head=NULL;
       next=NULL;
       val=0;
    }
    
    int get(int index) {
         MyLinkedList* ptr=head;
        int ct=0;
        
        while (ptr!=NULL){
            if (ct==index){
                return ptr->val;
            }
            ct++;
            ptr=ptr->next;
        }
        
     return -1;
    }
    
    void addAtHead(int val) {
        MyLinkedList* nw=new MyLinkedList();
        nw->val=val;
        nw->next=head;
        head=nw;
    }
    
    void addAtTail(int val) {
          MyLinkedList* ptr=head;
        MyLinkedList* nw=new MyLinkedList();
        nw->val=val;
        
        if (ptr==NULL){
            head=nw;
        }
        else{
            while (ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=nw;
            nw->next=NULL;
        }
    }
    
    void addAtIndex(int index, int val) {
           MyLinkedList* ptr=head;
         int ct=0;
         if (index==0){
             MyLinkedList* nw=new MyLinkedList();
              nw->val=val;
             nw->next=head;
             head=nw;
             return;
         }
        while (ptr!=NULL){
            if (ct+1==index){
                break;
            }
            else{
                ct++;
                ptr=ptr->next;
            }
        }
        
        if (ct+1==index && ptr){
          MyLinkedList* nw=new MyLinkedList();
          nw->val=val;
          if (ptr->next==NULL){
              nw->next=NULL;
          }
          else{
              nw->next=ptr->next;
          }
          
          ptr->next=nw;
        }
    }
    
    void deleteAtIndex(int index) {
       MyLinkedList* ptr=head;
         int ct=0;
        
        if (index==0){
             head=head->next;
             return;
         }
        
        while (ptr!=NULL){
            if (ct+1==index){
                break;
            }
            else{
                ct++;
                ptr=ptr->next;
            }
        }
        
        if (!ptr || !ptr->next){
            return;
        }
        
        
        if (ct+1==index && ptr){
          MyLinkedList* tem=ptr->next;  
          ptr->next=ptr->next->next;
          delete tem;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */