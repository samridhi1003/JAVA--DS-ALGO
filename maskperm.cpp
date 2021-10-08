// not done
def ninjaChess(king, queenie):

    # is in range of n for a and b
    def squared_range(a, b, n):
        return (a[0] >=  b[0] -n and a[0] <= b[0] + n and a[1] >= b[1]-n and a[1] <= b[1] + n)

    # if any square +1 // -1 for y and x are not under check ==> King escapes
    def no_valid_moves(a, b):
        if(a!=1):
            if([a-1,b] in notCheck):
                return False
            if(b!=1):
                if([a-1,b-1] in notCheck):
                    return False
            if(b!=8):
                if([a-1,b+1] in notCheck):
                    return False        
        if(a!=8):
            if([a+1,b] in notCheck):
                return False
            if(b!=1):
                if([a+1,b-1] in notCheck):
                    return False
            if(b!=8):
                if([a+1,b+1] in notCheck):
                    return False                
        if(b!=8):
            if([a,b+1] in notCheck):
                return False
        if(b!=1):
            if([a,b-1] in notCheck):
                return False        
        return True

    # declaring variables
    FinalResult = [0, 0, 0, 0]    
    letters = ['','a','b','c','d','e','f','g','h']
    notCheck = []
    InCheck = []

    # if king defends queen the square where queens stand is InCheck else not under check
    if(squared_range(k, q, 1)):
        InCheck.append(q)
    else:
        notCheck.append(q)

    # a grid 8x8 check which squares are under check and which are not
    for x in range(1, 9):
        for y in range(1, 9):

            # Squares to excldue are defended by King or postion of Queenie
            if(not squared_range([x,y], k, 1) and not [x,y] == q):                
                # if in deadly square of queen 5x5
                # 
                if(squared_range([x,y],q, 2)):
                    InCheck.append([x,y])

                # Check if on the same file and not if king is in between                
                elif (x == a_file):
                    if(not (k_file == a_file and (y > k_col > a_col or y < k_col < a_col))):
                        InCheck.append([x,y])

                # Check if on the same column and not if king in between
                elif( y == a_col):
                    if(not (k_col == a_col and ( x > k_file > a_file or x < k_file < a_file))):
                        InCheck.append([x,y])

                # Check diagonal and not if king in between
                # Black_King on Diagonaal van Queen
                elif(abs(x - a_file) == abs(y - a_col)):
                     if( not(abs(k_file - a_file) == abs(k_col - a_col) 
                         and ( ( x < k_file < a_file and y < k_col < a_col) 
                             or (x < k_file < a_file and y > k_col > a_col)
                             or (x > k_file > a_file and y < k_col < a_col)
                             or (x > k_file > a_file and y < k_col < a_col) ) ) ):
                        InCheck.append([x,y])
                else:
                    notCheck.append([x, y])

            # Add the squares where to White_King stands to checksquares
            elif(squared_range([x,y], k, 1)):
                InCheck.append([x,y])

    # for each cell in grid check surounding cells strengths update FinalResult accordingly
    for x in range(1, 9):
        for y in range(1, 9):
            # Exclude q and kings range
            if(not squared_range([x,y], k, 1) and not [x,y] == q):
                # if current square under Check
                if([x, y] in InCheck):
                    # if no possible moves FinalResult[0]++
                    # else FinalResult[1]++
                    if(no_valid_moves(x, y)):
                        print("Checkmate at: [" + str(x) + ", " + str(y) + "]")
                        FinalResult[0] += 1
                    else:
                        print("Check at: [" + str(x) + ", " + str(y) + "]")
                        FinalResult[1] += 1                                                    
                else:
                    # if no possible moves FinalResult[2]++
                    # else FinalResult[3]++
                    if(no_valid_moves(x, y)):
                        print("Stuck at: [" + str(x) + ", " + str(y) + "]")
                        FinalResult[2] += 1
                    else:
                        print("Safe at: [" + str(x) + ", " + str(y) + "]")
                        FinalResult[3] += 1     
    return FinalResult

assert print(ninjaChess("d3", "e4")) == [5, 21, 0, 29]