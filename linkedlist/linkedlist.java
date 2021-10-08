public class linkedlist{
    private class Node{
        private int data=0;
        private Node next=null;
        Node(int data){
            this.data=data;
        }

    }
    private Node head=null;
    private Node tail=null;
    private int noOfNodes=0;

    public int size(){
        return this.noOfNodes;
    }
    public boolean isEmpty(){
        return this.size()==0;
    }
    // ========================================================
    private void zeroNodeHandle(Node node){
         if(this.size()==0){
            this.head=node;
            this.tail=node;
        }
    }
    private void addFirstNode(Node node){
        if(this.size()==0){
            zeroNodeHandle(node);
        }
        else{
            node.next=this.head;
            this.head=node;
        }
        this.noOfNodes ++;

    }
    public void addFirst(int data){
        Node node=new Node(data);
        addFirstNode(node);

    }
      // ========================================================
    protected void addNodeAt(int idx,Node node){
        if(size()==0){
            addFirst(node.data);
        }
        if(idx==size()) return addLast(node.data);
        else{
        Node nodeat=nodeatidx(idx);
        Node prev=nodeatidx(idx-1);
        node.next=nodeat;
        prev.next=node;
        this.noOfNodes++;
        }
        
    }
    public void addAt(int idx,int data)throws Exception{
        if(idx<0 || idx>size()){
            throw new Exception("Invalid Index");
        }
        Node node=new Node(data);
         addNodeAt(idx,node);
        
    }
      // ========================================================
    private void addLastNode(Node node){
        if (this.size()==0){
            zeroNodeHandle(node);
        }else{
            this.tail.next=node;
            this.tail=node;
        }
        this.noOfNodes ++;
    }
    public void addLast(int data){
        Node node=new Node(data);
        addLastNode(node);
    }
    protected void handleonesize(){
        this.head=null;
        this.tail=null;
    }
      // ========================================================
    protected Node removeFirstNode(){
        Node temp=head;
        if(size()==1){
            handleonesize();
        }
        else{
        this.head=this.head.next;
        }
        temp.next=null;
        this.noOfNodes --;
        return temp;
    }
    public int removeFirst() throws Exception{
        if(size()==0){
            throw new Exception("linkedlist is empty");
        }
        Node node=removeFirstNode();
        return node.data;
    }
      // ========================================================
    protected Node nodeatidx(int idx){
        Node temp=head;
        while(idx-->0){
            temp=temp.next;
        }
        return temp;
    }
      // ========================================================
    protected Node removeLastNode(){
       Node temp=tail;
        if (size()==1){
            handleonesize();
        }
        else{
           Node getNode=nodeatidx(size()-2);
                getNode.next=null;
                this.tail=getNode;
        }
        temp.next=null;
        this.noOfNodes --;
        return temp;

    }
    public int removeLast()throws Exception{
        if(size()==0){
            throw new Exception("linkedlist is empty");
        }
         Node node=removeLastNode();
        return node.data;
    }
      // ========================================================
      public int RemovenodeAt(int idx){
          Node curr=nodeatidx(idx);
          Node Prev=nodeatidx(idx-1);
          Prev.next=curr.next;
          curr.next=null;
          this.noOfNodes --;
          return curr.data;
      }
    public int removeAt(int idx)throws Exception{
        if(size()==0){
             throw new Exception("empty linkedlist")
         }
        if(idx<0 || idx>size()){
            throw new Exception("Invalid Index");
        }
        int ans=0;
        if(idx==0){
            ans=removeFirst();
        }
        else if(idx==size()-1){
            ans=removeLast();
        }
        else{
            ans=RemovenodeAt(idx);
        }
        return ans;
    }
// =======================================================================
    public int getFirst()throws Exception{
        if(size()==0){
             throw new Exception("empty linkedlist")
         }
       Node node= nodeatidx(0);
       return node.data;
    }
// ===========================================================
     public int getLast()throws Exception{
         if(size()==0){
             throw new Exception("empty linkedlist")
         }
         Node node= nodeatidx(size()-1);
         return node.data;
    }
// ===========================================================
     public int getAt(int idx)throws Exception{
         if(size()==0){
             throw new Exception("empty linkedlist")
         }
         if(idx<0 || idx>size()){
            throw new Exception("Invalid Index");
        }
         Node node= nodeatidx(idx);
         return node.data;
    }
// ===========================================================
}