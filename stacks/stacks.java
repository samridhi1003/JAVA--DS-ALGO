public class stacks()
{
    int[]st;
    int tos=-1;
    stacks()
    {
        this.st=new int[10];
    }
    stacks(int size)
    {
        this.st=new int [size];
    }
    stacks(int[]arr)
    {
        this.st=new int[2*arr[10]]
        {
            for(int i=0;arr.length(),i++)
            {
                this.st[i]=arr[i];
            }
        }
        this.tos=arr.length()-1;
    }

    public  void push (int data)
    {
        if(tos==st.length())
        {
            System.out.println("stack overflow");
            return;
        }
        st[tos++]=data;
    }
    public int top()
    {
        if(tos==-1)
        {
            Sytem.out.println("stack is empty");
            return -1;
        }
      return arr[tos];
    }
    public int pop()
    {
        if(tos==-1)
        {
             Sytem.out.println("stack is empty");
             return -1;
        }
        int rv=arr[tos];
        tos--;
        return rv;
    }
    public int size()
    {
        return tos+1;
    
    }
    public boolean isempty()
    {
        return(tos==-1);
    }
}///////////////////////////////////7