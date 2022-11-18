#!/usr/bin/env python3
"""Island Perimeter function"""


def island_perimeter(grid):
    """Function that returns the p"""
    p = 0
    rrows = len(grid)

    if grid != []:
        rcolumns = len(grid[0])
        for i in range(rrows):
            for j in range(rcolumns):
                if grid[i][j] == 1:
                    if (i - 1) == -1 or grid[i - 1][j] == 0:
                        p += 1
                    if (i + 1) == rrows or grid[i + 1][j] == 0:
                        p += 1
                    if (j - 1) == -1 or grid[i][j - 1] == 0:
                        p += 1
                    if (j + 1) == rcolumns or grid[i][j + 1] == 0:
                        p += 1

    return p
