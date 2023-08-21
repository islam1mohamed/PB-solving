def dirReduc(arr):
    stack = []
    
    for item in arr:
        
        if stack and ((item == "NORTH" and stack[-1]== "SOUTH") or (item == "SOUTH" and stack[-1]== "NORTH")) :
            stack.pop()
        
        elif stack and ((item == "EAST" and stack[-1]== "WEST") or (item == "WEST" and stack[-1]== "EAST")) :
            stack.pop()
        else : stack.append(item)

    return stack


x=dirReduc(["NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"])
print(x)