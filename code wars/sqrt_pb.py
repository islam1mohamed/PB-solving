def tower_builder(n_floors):
    # build here
    arr= []
    space = " "
    star= "*"

    for i in range(n_floors,0,-1): # if you don't include the middle term an infinite loop occurs that causes errors

        temp_space =space* (i-1)
        temp_star = star*int((n_floors-i)*2+1)
        arr.append(f"{temp_space}{temp_star}{temp_space}")

    return arr

print(tower_builder(4))

