#!/usr/bin/env python3

from Map.map import Map

map = Map(5,5)
map.create_obstacles([{'x': 1, 'y': 1},
                      {'x': 1, 'y': 2},
                      {'x': 1, 'y': 3},
                      {'x': 1, 'y': 4},
                      {'x': 3, 'y': 2}])
map.display_map()