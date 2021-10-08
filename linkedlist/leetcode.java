 public ListNode reverseList(ListNode head) {
        if(head==null ||head.next==null)
            return head;
        ListNode prev=null;
         ListNode curr=head;
       
        while(curr!=null){
            ListNode forw=curr.next;
            curr.next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
     public ListNode middleNode(ListNode head) {
        if(head==null|| head.next==null)return head;
        ListNode slow = head;
        ListNode fast = head;
        while (fast.next != null && fast.next.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
     public boolean isPalindrome(ListNode head) {

         if(head==null|| head.next==null)return true;
        Listnode mid=middleNode(head);
        ListNode nhead=mid.next;
        mid.next=null;
        ListNode curr2=reverseList(nhead);
        ListNode curr1=head;
        while(curr1 !=null && curr2!=null){
            if(curr1.val!=curr2.val) return false;
            curr1=curr1.next;
            curr2=curr2.next;
        }
        nhead=reverseList(nhead);
        mid.next=nhead;
        return true;
        
    }
    
     public ListNode detectCycle(ListNode head) {
         if(head==null || head.next==null)return null;
        ListNode slow=head;
        ListNode fast=head;
        while(fast!=null && fast.next!=null){
            fast=fast.next.next;
            slow=slow.next;
            if(slow==fast)
                break;
        }
      if(fast!=slow)return null;
        slow=head;
        while(slow!=fast){
            slow=slow.next;
            fast=fast.next;
        }
        return slow;
        
    }
     public boolean hasCycle(ListNode head) {
        if(head==null || head.next==null)return false;
        ListNode slow=head;
        ListNode fast=head;
        while(fast.next!=null && fast.next.next!=null){
            fast=fast.next.next;
            slow=slow.next;
            if(slow==fast)return true;
        }
        return false;
    }
    public ListNode reverseList(ListNode head) {
        if(head==null ||head.next==null)
            return head;
        ListNode prev=null;
         ListNode curr=head;
       
        while(curr!=null){
            ListNode forw=curr.next;
            curr.next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
     public ListNode middleNode(ListNode head) {
        if(head==null|| head.next==null)return head;
        ListNode slow = head;
        ListNode fast = head;
        while (fast.next != null && fast.next.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
    public void reorderList(ListNode head) {
       
        ListNode mid=middleNode(head);
        ListNode nhead=mid.next;
        mid.next=null;
        ListNode curr2=reverseList(nhead);
        ListNode curr1=head;
        int count=0;
        ListNode currN=curr1;
        ListNode curr2N=curr2;
        while(curr1!=null &&curr2!=null){
            if(count%2==0){
                currN=curr1.next;
                curr1.next=curr2;
                curr1=currN;
                count++;
            }
            else if(count%2==1){
                curr2N=curr2.next;
                curr2.next=curr1;
                curr2=curr2N;
                count++;
            }
        }
        
    }
     public int majorityElement(int[] nums) {
        HashMap<Integer,Integer>maps=new HashMap<>();
        int n=nums.length;
        int val=nums.length/2;
        int number=nums[0];
        for(int i=0;i<n;i++){
            if(!maps.containsKey(nums[i])){
                maps.put(nums[i],1);
            }else{
                int freq=maps.get(nums[i]);
                freq++;
                maps.put(nums[i],freq);
                if(freq>val){
                    number=nums[i];
                    val=freq;
                }
            }
        }
        return number;
    }
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if (l1==null|| l2==null){
            return l1!=null?l1:l2;
        }
        ListNode head=l1.val<l2.val?l1:l2;
        if(head==l1){
            ListNode forw=l1.next;
                    l1.next=null;
            l1=forw;
        }else
        {
            ListNode forw=l2.next;
                    l2.next=null;
            l2=forw;
        }
            
         ListNode head2=head;
        // ListNode head2=l2;
        while(l1!=null && l2!=null)
        {
           
                if( l1.val<l2.val )
                    {
                        head.next=l1;
                        ListNode forw=l1.next;
                        l1.next=null;
                        l1=forw;
                    }
                    else
                    {
                         head.next=l2;
                        ListNode forw=l2.next;
                        l2.next=null;
                        l2=forw;
                        // l2=l2.next;
                    }  
            head=head.next;
        }
        head.next=l1!=null?l1:l2;
       return head2;
    }
     public ListNode mergeKLists2(ListNode[] lists,int sp, int ep) {
         if(sp==ep){
             return lists[sp];
         }
         int mid= (sp+ep)/2;
         ListNode list1=mergeKLists2(lists,sp,mid);
         ListNode list2=mergeKLists2(lists,mid+1,ep);
         return mergeTwoLists(list1, list2);
     
    }
    public ListNode mergeKLists(ListNode[] lists) {
        if(lists.length==0){
            return null;
        }
     return mergeKLists2(lists,0,lists.length-1);
    }