public class hufman{
    public class Node implement comaparable<Node>{
        string data="";
        int freq=0;
        Node left=null;
        Node right=null;
        public Node(String data,int freq,Node left,Node right)
        {
            this.data=data;
            this.freq=freq;
            this.left=left;
            this.right=right;
        }
        @override
        public int compareTo(Node o)
        {
            return this.freq-o.freq;
        }
    }
    public void hufamantree(String str)
    {
        int[]freqmap=new int[26];
        for(int i=0;i<str.length();i++)
        {
            freqmap[]
        }
    }
    public static void main(String[]args){
        PriorityQueue<Node>pq=new PriorityQueue<Node>();
        pq.add(new Node("a",60,null,null));
        pq.add(new Node("b",10,null,null));
        pq.add(new Node("c",12,null,null));
        pq.add(new Node("d",13,null,null));
        pq.add(new Node("e",8,null,null));
        pq.add(new Node("f",15,null,null));
        pq.add(new Node("g",3,null,null));
        pq.add(new Node("h",7,null,null));
        pq.add(new Node("i",10,null,null));
        pq.add(new Node("j",11,null,null));
        pq.add(new Node("z",26,null,null));
    }
    while(pq.size()!=1){
        Node out=pq.poll();
        Node out1=pq.poll();
        Node new_node=new Node("",out.freq+out1.freq,out,out1);
        pq.add(new_node);
    }
    Node root=pq.poll();
    System.out.println(root.left.data);
}