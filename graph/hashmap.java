import java.util.LinkedList;
public class hashmap
{
    public class Node{
        Integer key;
        Integer value;
        public Node(Integer key,Integer value){
            this.key=key;
            this.value=value;
        }
        @override
        public String toString(){
            return this.key+"="+this. value;
        }
    }
    private int size=0;
    private LinkedList<Node>[]buckets=new LinkedList[10];
    public hashmap_()
    {
        reassign();
    }
    public void reassign(){
        for(int i=0;i<buckets.length;i++)
        {
            buckets[i]=new LinkedList<>();
        }
    }
         @override
        public String toString(){
           StringBuilder sb= new StringBuilder();
           sb.append("{}");
           return sb.toString();
        }
        public void put(Integer key, Integer value)
        {
            int code=mygroup(key);
            LinkedList<Node>group=buckets[code];
            Node rn=foundInGroup(group,key);
            if (rn!==null)
            {
                rn.value=value;
            }
            else{
                Node node=new Node(key,value);
                group.addLast(node);
                this.size++;
                double lambda=group.size()*1.0/buckets.length;
                if(lambda>=0.3)
                {
                    rehash();
                }
            }
        }
        public void get(Integer key){
            int code=mygroup(key);
            LinkedList<Node> group=buckets[code];
            Node rn=foundInGroup(group,key);
            return rn==null?null:rn.value;
        }
        public Node remove(Integer key)
        {
            int code=mygroup(key);
            LinkedList<Node>group=buckets[code];
            Node rn=foundInGroup(group,key);
            if(rn!=null)
            {
                this.size--;
                return group.removeFirst();
            }
            else{
                System.out.println("ElementNOTfound");
            }
        }
        private Node FoundInGroup(LinkedList<Node>group,Integer key)
        {
            Node rn=null;
            int size=group.size();
            while(size-->0){
                Node temNode=group.getFirst();
                if(temNode.key==key){
                    rn=temNode;
                    break;
                }
                group.addList(group.removeFirst());
            }
            return rn;
        }
        
    public Integer mygroup(Integer key){
        return MyHashCode(key)%buckets.length;


    }
    public Integer  MyHashCode(Integer key){
        Integer val=key.hashCode();
        return Math.abs(val);
    }
}