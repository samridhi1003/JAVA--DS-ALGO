//994 rotting oranges
class Solution {
    public int orangesRotting(int[][] grid) {
        int freshranges=0;
        int n=grid.length;
        int m=grid[0].length;
        LinkedList<Integer> que=new LinkedList<>();  // bcz we know behind the scene que ne linkedlist hi adapt kr rkhi h
        
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(grid[i][j]==2){
                        que.addLast(i*m+j);
                    }
                    if(grid[i][j]==1){
                        freshranges++;
                    }
                }
            }
        if(freshranges==0){
            return 0;
        }
        int[][] dir= {{1,0},{-1,0},{0,-1},{0,1}};
        int time=0;
        while(que.size()>0)
        {
            int size= que.size();
            while(size-->0)
            {
                int idx=que.removeFirst();
                int r = idx/ m;
                int c=  idx% m;
                for(int d=0;d <dir.length;d++){
                    int x= r+dir[d][0];
                    int y= c+dir[d][1];
                    if(x>=0&& y>=0 && x<n && y<m && grid[x][y]==1){
                        que.addLast(x*m+y);
                        grid[x][y]=2;
                        freshranges--;
                        if(freshranges==0){
                            return time+1;
                        }
                    }
                }
                
            }
            time++;
            
        }
        return -1;
    }
}
//is Graph Bipartite ======== 785
class Solution {
    public boolean isBipartite(int[][] graph) {
        if (graph.length == 0) {
            return false;
        }
        int[] vis = new int[graph.length]; 
        Arrays.fill(vis, -1);                                 // -1 : unvisited, 0 : red, 1 : green
        for (int i = 0; i < graph.length; i++) {
            if (vis[i] == -1) {
                if (!isBipartiteBFS(i, vis, graph)) {
                    return false;
                } 
            }
        }
        return true;
    }
    
    public boolean isBipartiteBFS(int src, int[] vis, int[][] graph) {
        LinkedList<int[]> que = new LinkedList<>();
        que.addLast(new int[] {src, 0});       
        while (que.size() > 0)  {
            int size = que.size();
            while (size-- > 0) {
                int[] rvtx = que.removeFirst();
                if (vis[rvtx[0]] != -1) {
                    if (vis[rvtx[0]] != rvtx[1]) { 
                        return false;
                    }
                }
                vis[rvtx[0]] = rvtx[1];
                for (int e : graph[rvtx[0]]) {
                    if (vis[e] == -1) {
                        que.addLast(new int[] {e, (rvtx[1] + 1) % 2});
                    }
                }
            }
        }
        return true;
    }
}
//663 wall and gate 
public class Solution {
    /**
     * @param rooms: m x n 2D grid
     * @return: nothing
     */
    public void wallsAndGates(int[][] rooms) {
        // write your code here
        int n= rooms.length;
        int m = rooms[0].length;
        int infiroom=0;
        int[][]dir ={{1,0},{0,1},{-1,0},{0,-1}};
        Queue<Integer> que = new LinkedList<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rooms[i][j]==0){
                    que.add(i*m+j);
                }else if(rooms[i][j]==2147483647)
                {
                    infiroom++;
                }
            }
        }
        int distance=0;
        while(que.size()!=0){
            int size= que.size();
            while(size-- >0){
                int idx = que.remove();
                int r= idx/m;
                int c=idx%m;
                
                for(int d=0;d<4;d++){
                    int x=r+ dir[d][0];
                    int y=c+ dir[d][1];
                    if(x>=0 && y>=0 && x<n && y<m && rooms[x][y]==2147483647){
                         infiroom--;
                        rooms[x][y]=distance+1;
                        que.add(x*m+y);
                       
                        if(infiroom==0){
                            return;
                        }
                    }
                }
            }
             distance++;
        }
    }
}

// 207 course schedulling  ========================================================
class Solution {
    
    
     public boolean KhanAlgo(int n, ArrayList<ArrayList<Integer>>graph){
         int[] indegree=new int[n];
         for(int i=0;i<n;i++){
             for(int e: graph.get(i)){
                 indegree[e]++;
             }
         }
         int count=0;
         int level=0;
         Queue<Integer>que =new LinkedList<>();
         for(int i=0;i<n;i++){
             if(indegree[i]==0)
             {
                 que.add(i);
             }
         }
         while(que.size()!=0){
             int size=que.size();
             while(size-->0){
                int rvtx=que.remove();
                count++;
                 for(int e:graph.get(rvtx)){
                     if(--indegree[e]==0){
                         que.add(e);
                     }
                 }
                 level++;
             }
         }
         
         
         return count==n;
         
     }
    
        public boolean canFinish(int N, int[][] prerequisites) {
       ArrayList<ArrayList<Integer>>graph=new ArrayList<ArrayList<Integer> >();
            for(int i=0;i<N;i++){
                graph.add(new ArrayList<Integer>());
            }
        for(int[] ar:prerequisites){
            
            graph.get(ar[0]).add(ar[1]);
        }
        return KhanAlgo( N,graph);
        
    }
}