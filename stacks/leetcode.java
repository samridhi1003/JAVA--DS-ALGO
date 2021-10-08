class Solution {
    public int[] asteroidCollision(int[] asteroids) {
          Stack<Integer>stp=new Stack<>();
        int[]ans=new int[asteroids.size()];
        int j=0;
        for(int i=0;i<asteroids.length;i++)
        {  
            if(stp.size()==0 && asteroids[i]<0 )
            {  
                ans[j]=asteroids[i];
                j++;
                i++;
            }
            if(asteroids[i]>0)
                stp.push();
             if(stp.size()!=0 && asteroids[i]<0 )
             {
                 
                 while( stp.peek()<(-1*(asteroids[i])))
                 {    
                 if(stp.peek()<(-1*(asteroids[i])))
                   {
                       stp.pop();
                   }
                   
                  if(stp.peek()>(-1*(asteroids[i])))
                   {
                        continue;
                   }
                   if(stp.peek()==(-1*(asteroids[i])))
                  {
                     stp.pop(); 
                     continue;
                   }
                 }   
                
             }
        }
        
        for(int i=j+stp.size()-1;i>=j;i--)
        {
            ans[i]=stp.pop();
        }
        return ans;
  }
}






/////////////////////////////
int sum=0,minn=10000,maxn=-100000;
  
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        if(arr[i]>maxn)
        {
            maxn=arr[i];
        }
        if(arr[i]<minn)
        {
            minn=arr[i];
        }
    }
  
    cout<<sum-maxn<<"  "<<sum-minn;







////////////////////////
  
        min.push(INT MAX);
         
                st.push(x);6
             if(x<min.top())
             {
                 min.push(x);
             
             }