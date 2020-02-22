#!/usr/bin/python3
"""Island perimeter.
Calculate the perimeter of an island (if there's any).
We can assume the following things are true:
    > There's only one island
    > The island has no water inside it
    > No diagonals
    > Width and height of the grid will not be higher than 100 units.
"""


def island_perimeter(grid):
    """Calculate the perimeter of an island."""
    total_p = 0
    if grid is not None or grid != [[]]:
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    total_p += sum_perim(grid, i, j)

    return total_p


def sum_perim(grid, i, j):
    """Sum the perimeter on the current land square."""
    current_p = 0
    try:
        if grid[i - 1][j] == 0:
            current_p += 1
    except LookupError:
        current_p += 1
    try:
        if grid[i][j + 1] == 0:
            current_p += 1
    except LookupError:
        current_p += 1
    try:
        if grid[i + 1][j] == 0:
            current_p += 1
    except LookupError:
        current_p += 1
    try:
        if grid[i][j - 1] == 0:
            current_p += 1
    except LookupError:
        current_p += 1

    return current_p
