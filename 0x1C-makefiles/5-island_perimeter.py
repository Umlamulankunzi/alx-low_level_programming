#!/usr/bin/python3

"""
Module to calculate perimeter of island
"""


def island_perimeter(grid):
    """
    Computes the perimeter of the island described in grid.

    Args:
        grid (list): A list of list of integers representing the island.

    Returns:
        The perimeter of the island.

    Raises:
        TypeError: If grid is not a list of lists of integers.
        ValueError: If grid is not rectangular or contains invalid values.
    """
    if (not isinstance(grid, list) or
            not all(isinstance(row, list) for row in grid) or
            not all(isinstance(cell, int) for row in grid for cell in row)):
        raise TypeError("grid must be a list of lists of integers")

    rows = len(grid)
    cols = len(grid[0])

    for row in grid:
        if len(row) != cols:
            raise ValueError("grid must be rectangular")

    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
