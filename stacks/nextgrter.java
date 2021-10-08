import java.util.*;
public class nextgrter{
    public static void main(String []args)
    {
        int[]arr={4,5,2,25};
        int ans=-1;
        stack<Integer> st=new stack<Integer>();
        stack<Integer> ans=new stack<Integer>();
        for(int i=0;i<arr.length;i++)
        {
            if(st.size()==0)
            {
                st.push(arr[i]);
                continue;
            }
            while(st.size()!=0 && st.peek()<arr[i])
            {
                System.out.println(st.pop()+"->"+arr[i]);
            }
            st.push(arr[i]);
            while(st.size!=0)
            {
                 System.out.println(st.pop()+"->"+"-1");
            }
        }
        //left max==================
         for(int i=arr.length;i>0;i--)
        {
            if(st.size()==0)
            {
                st.push(arr[i]);
                continue;
            }
            while(st.size()!=0 && st.peek()<arr[i])
            {
                System.out.println(st.pop()+"->"+arr[i]);
            }
            st.push(arr[i]);
            while(st.size!=0)
            {
                 System.out.println(st.pop()+"->"+"-1");
            }
        }
        //===================next right smaller==============
         for(int i=0;i<arr.length;i++)
        {
            if(st.size()==0)
            {
                st.push(arr[i]);
                continue;
            }
            while(st.size()!=0 && st.peek()>arr[i])
            {
                System.out.println(st.pop()+"->"+arr[i]);
            }
            st.push(arr[i]);
            while(st.size!=0)
            {
                 System.out.println(st.pop()+"->"+"-1");
            }
        }
        //left smaller======================================
         for(int i=arr.length;i>0;i--)
        {
            if(st.size()==0)
            {
                st.push(arr[i]);
                continue;
            }
            while(st.size()!=0 && st.peek()>arr[i])
            {
                System.out.println(st.pop()+"->"+arr[i]);
            }
            st.push(arr[i]);
        }
            while(st.size!=0)
            {
                 System.out.println(st.pop()+"->"+"-1");
            }
        
        // for(int i=arr.length();i>=0;i--)
        // {
        //     if(stack.isempty)
        //     {
        //     system.out.println(arr[i]+"->"+ans);
        //     break;
        //     }
        //     stack.push(arr[i]);
        //     if(arr[i]<stack.top())
        //     {
        //         ans=stack.top();
        //          system.out.println(arr[i]+"->"+ans);

        //     }
        //     if(arr[i]>stack.top())
        //     {

        //     }
        // }
        // int itr1,itr2;
        // for(int itr1=0;itr1<arr.length;itr1++)
        // {
        //     for(int itr2=itr1+1;itr2<arr.length;itr2++)
        //     {
        //         if(arr[itr2]>arr[itr1])
        //         {
        //             system.out.println(arr[itr1]+"->"+arr[itr2]);
        //             break;
        //         }
        //         if(itr1=arr.length)
        //         {
        //             system.out.println("-1");
        //         }
        //     }
        // }

    }
}