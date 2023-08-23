#!/usr/bin/python3
"""
a module
"""

def island_perimeter(grid):
    """a method"""
    y = 0
    x = 0
    
    for index in range(1, len(grid) - 1):
            for jdex in range(1, len(grid[index]) - 1):
                if grid[index][jdex] == 1:
                    if grid[index][jdex - 1] == 0:
                        y += 1
                    if grid[index][jdex + 1] == 0:
                        y += 1
                    if grid[index - 1][jdex] == 0:
                        x += 1
                    if grid[index + 1][jdex] == 0:
                        x += 1
    return x + y
