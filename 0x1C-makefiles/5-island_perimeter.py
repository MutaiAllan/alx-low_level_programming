#!/usr/bin/env python3
"""Defines a function that calculates perimeter."""

def island_perimeter(grid):
    """REturns perimeter of an island.

    Args:
        grid (list): A list of integers representing an island.
    Returns:
        The perimter of the island.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i <= 0 or not grid[i - 1][j]:
                    perimeter += 1
                if j <= 0 or not grid[i][j - 1]:
                    perimeter += 1
                if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
                    perimeter += 1
                if i >= len(grid) - 1 or not grid[i + 1][j]:
                    perimeter += 1

    return perimeter
