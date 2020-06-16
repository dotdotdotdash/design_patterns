#!/usr/bin/env python3

import math

class Node:
    def __init__(self):
        self.x = 0
        self.y = 0
        self.node_id = 0
        self.g_cost = math.inf
        self.h_cost = math.inf
        self.f_cost = math.inf
        self.is_visited = False
        self.is_obstacle = False