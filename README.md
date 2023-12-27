# INTRODUCTION

This is a program solving a simple maze by using SARSA algorithm with an Epsilon-greedy policy.<br />
There is a small terminal-based animation to show what it is going on.<br />
The application has been designed for windows system, but to match to unix system you only have to change 1 ligne
 of code : in the file functions.cpp in line186 replace system("cls"); by system("clear");
 

# MAKEFILE

to make the exe file called maze_sarsa:<br />
make<br />


# HOW IT WORKS

The board is composed by 9x9=81 possible states, but we can remove the wall cases.<br />
So it can be represented as like that:<br />

0 | 1 | 2 | 3 | X | 5 | 6 | 7 | X |
--- | --- | --- | --- |--- |--- |--- |--- |--- |
X | X | X | 12 | X | 14 | X | X | 17 |
18 | 19 | 20 | 21 | X | 23 | 24 | 25 | 26 |
27 | X | X | 30 | 31 | 32 | X | 34 | X |
X | 37 | 38 | 39 | X | X | 42 | 43 | X |
X | 46 | X | X | 49 | 50 | 51 | X | X |
54 | 55 | 56 | X | 58 | X | X | X | X |
63 | X | 65 | X | 67 | X | X | X | X |
72 | X | X | 75 |76 | 77 | 78 | 79 | 80 |

The goal is to start from the state 0 and finish to the state 80.<br />
The agent can not be in  a wall state. However in a regular state the agent have the possibility to
choose among  4 actions (at maximum, depending on there is a wall or not, next to the current state): LEFT / UP  /RIGHT / DOWN.<br />
Some rewards (positive or negative) have been assigned in some critical states (see in the main file).<br />
And after some episodes, we can end up with a path solution implemented with the Q-table of the agent:<br />
for a state q[i] the first value corresponds to LEFT, the second to UP, the third to RIGHT, the last to DOWN (the highest value is the best action to choose).<br />

 



