#!/usr/bin/python3
""" Program of the island perimeter calculator"""


def island_perimeter(grid):
    """function that calculates the perimeter of an island
    (cells of 1s inside a grid)"""
    perimeter = 0

    # iterate through the outer list
    for i in range(len(grid)):
        # iterate through the inner lists
        for j in range(len(grid[i])):
            # checks if the first inner element is land
            if grid[i][j]:
                perimeter += 4
                if grid[i - 1][j] and i > 0:
                    perimeter -= 2
                if grid[i][j - 1] and j > 0:
                    perimeter -= 2
    return perimeter
