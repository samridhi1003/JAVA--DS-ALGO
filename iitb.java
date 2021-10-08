/*
Implement the game below:

Input: Number of players

Rules:
1. Players sit in a circle.
2. Each player(on their turn) has the power eliminate the next player
3. Continue step 2 until only single player is left
4. Game starts at Player 1

Output: Find the winning position

Examples:

If number of players is 5:
  Input: n = 5
    [1, 2, 3, 4, 5]

  - Player 1 eliminates Player 2                      // Remaining Players [1, 3, 4, 5]
  - Now, on Player 3's turn, he eliminates Player 4   // Remaining Players [1, 3, 5]
  - Now, on Player 5's turn, he eliminates Player 1   // Remaining Players [3, 5]
  - Now, on Player 3's turn, he eliminates Player 5   // Remaining Players [3]

  Output: w = 3


If nunmber of players is 6:
  Input: n = 6
  [1, 2, 3, 4, 5, 6]

  - Player 1 eliminates Player 2                      // Remaining Players [1, 3, 4, 5, 6]
  - Now, on Player 3's turn, he eliminates Player 4   // Remaining Players [1, 3, 5, 6]
  - Now, on Player 5's turn, he eliminates Player 6   // Remaining Players [1, 3, 5]
  - Now, on Player 1's turn, he eliminates Player 3   // Remaining Players [1, 5]
  - Now, on Player 5's turn, he eliminates Player 1   // Remaining Players [5]

  Output: w = 5
*/

import java.io.* ;
import java.util.* ;
public class iitb{
    public static int solution(int n ,int k)
    { 
        if(n==1)
        {
            return 0;
        }
        int x=solution(n-1,k);
        int y= (x+k)%n;
        return y+1;
    }
    public static void main(String[]args){
        Scanner scn=new Scanner(System.in);
        int n =6;
        int k=2;
        System.out.print(solution(n,k));

    }
}
// 23450 =y
// 01234 =x
//  y= (x+k)%n;
