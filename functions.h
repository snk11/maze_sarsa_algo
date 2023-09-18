#ifndef FUNCTIONS_H
# define FUNCTIONS_H


#include "header.h"

int EvalBest(vector<vector<float>> q,int s);
int ValideState(int s,int a);
int GetPolicy(int epsi);
int GetNewState(int s,int a);
int GetNewAction(int policy,vector<vector<float>> q,int s);
int CheckWall(int i_pos,int j_pos);
void Draw(int height, int width, int x_coord, int y_coord);
void Run(int ep,vector<vector<float>> &q,vector<float> r,int start,int end);

#endif
