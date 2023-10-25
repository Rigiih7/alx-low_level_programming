#!/usr/bin/python3
"""Function island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid.

    Args:
        grid (list): grid
    """
    length, width = len(grid), len(grid[0])
    spot, adjacent = 0, 0
    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                spot += 1
                if i < length - 1 and grid[i+1][j] == 1:
                    adjacent += 1
                if j < width - 1 and grid[i][j + 1] == 1:
                    adjacent += 1
    return spot * 4 - 2 * adjacent