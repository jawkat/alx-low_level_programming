#!/usr/bin/python3
"""
5-island_perimeter
"""

def island_perimeter(grid):
    """
    island_perimeter _summary_

    Args:
        grid (_type_): _description_
    """
    size = 0
    edges = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    perimeter = size * 4 - edges * 2

    return perimeter
