public class client{
    public static void main (String[]args)throws Exception{
        linkedlist ll=new linkedlist();
        ll.addFirst(10);
        ll.addFirst(20);
         ll.addFirst(40);
          ll.addFirst(80);
       
        // ll.removeLast();
        ll.addAt(2,2);
         int d1=ll.getFirst();
         int d2=ll.getAt(1);
         int d3=ll.getAt(2);
         int d4=ll.getAt(3);
         int d5=ll.getLast();
        
        // int data=ll.removeAt(3);
         System.out.println(ll.size());
        System.out.println(d1+" "+d2+" "+d3+" "+d4+ " "+d5);
    }
// ===========================================================
}