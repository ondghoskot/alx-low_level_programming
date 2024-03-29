#usr/bin/python3
""" Program of the island perimeter calculator"""

def island_perimeter(grid):
    """function that calculates the perimeter of an island
    (cells of 1s inside a grid)"""
    horizontal = 0
    vertical = 0

    #iterate through the outer list
    for i in range (len(grid)):
        #iterate through the inner lists
        for j in range (len(grid[i])):
            #checks if the first inner element is land
            if grid[i][j]:
                horizontal += 1
                if horizontal < 2:
                    vertical += 1
                    if not grid[i][j+1]:
                        horizontal = 0
                        break
    perimeter = (horizontal + vertical) * 2
    return perimeter
