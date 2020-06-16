#!/usr/bin/env python3

import matplotlib.pyplot as plt
from Map.node import Node

class Map:
    def __init__(self, height, width):
        self.height = height
        self.width = width
        self.map = []
        self.create_map()

    def create_map(self):
        k = 0
        for x in range(self.height):
            row = []
            for y in range(self.width):
                node = Node()
                node.x = x
                node.y = y
                node.node_id = k
                k = k + 1
                row.append(node)
            self.map.append(row)
    
    def create_obstacles(self, obstacles):
        for obstacle in obstacles:
            self.map[obstacle['x']][obstacle['y']].is_obstacle = True

    def display_map(self):
        for i in range(self.height):
            for j in range(self.width):
                if self.map[i][j].is_obstacle:
                    plt.plot(self.map[i][j].x, self.map[i][j].y, 'rx')
                else:
                    plt.plot(self.map[i][j].x, self.map[i][j].y, 'go')

        plt.show()
