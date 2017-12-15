from Stack import Stack

stack = Stack(int) #Initialise a stack object with the data type.

#Gotta love them true loops.
while True:

    try:
        intInput = int(input("Please enter a non-negative integer to convert to binary: ")) #Retrieve the terminal input. Convert to int.
    except Exception:
        break;
    
    if intInput < 0:
        break
    
    
    #Push these remainders and pop em out like a baby afterwards. A binary baby.
    
    while intInput != 0:
        stack.push(intInput % 2)
        intInput //= 2

    while stack.top is not None:
        print(stack.pop(), end="")

    print("")

