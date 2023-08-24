#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
    print("---")

    grid_empty = [
        [0, 0, 0],
        [0, 0, 0],
        [0, 0, 0]
    ]
    print(island_perimeter(grid_empty))
    print("---")

    grid_single_land = [
        [0, 0, 0],
        [0, 1, 0],
        [0, 0, 0]
    ]
    print(island_perimeter(grid_single_land))
    print("---")

    grid_corner_land = [
        [1, 0, 0],
        [0, 0, 0],
        [0, 0, 0]
    ]
    print(island_perimeter(grid_corner_land))
    print("---")

    grid_line_land = [
        [0, 1, 1],
        [0, 1, 1],
        [0, 1, 0]
    ]
    print(island_perimeter(grid_line_land))
    print("---")
