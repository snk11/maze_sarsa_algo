#include "functions.h"


int EvalBest(vector<vector<float>> q,int s)
{
  float m1 = *max_element(q[s].begin(), q[s].end());

  int i = 0;
  int action = -1;
  while(i < static_cast<int>(q[s].size()))
  {
      if (q[s][i] == m1)
      {
          action = i;
      }
      i++;
  }
  return action;
}


int ValideState(int s,int a)
{
    //the edges
    if ((s == 0 || s == 9 || s == 18 || s == 27 || s == 36 || s == 45 || s == 54 || s == 63 || s == 72) && a == 0)
        return 0;
    if ((s == 8 || s == 17 || s == 26 || s == 35 || s == 44 || s == 53 || s == 62 || s == 71 || s == 80) && a == 2)
        return 0;
    if ((s == 0 || s == 1 || s == 2 || s == 3 || s == 4 || s == 5 || s == 6 || s == 7 || s == 8) && a == 1)
        return 0;
    if ((s == 72 || s == 73 || s == 74 || s == 75 || s == 76 || s == 77 || s == 78 || s == 79 || s == 80) && a == 3)
        return 0;

    //the wall states
    if ((s == 0 || s == 1 || s == 2 || s == 6 || s == 7 || s == 19 || s == 20 || s == 24 || s == 26 || s == 27 || s == 31 || s == 32 || s == 38 || s == 39 || s == 43 || s == 50 || s == 51 || s == 55 || s == 65) && a == 3)
        return 0;
    if ((s == 3 || s == 7 || s == 12 || s == 14 || s == 21 || s == 27 || s == 32 || s == 34 || s == 39 || s == 43 || s == 46 || s == 51 || s == 56 || s == 58 || s == 63 || s == 65 || s == 67 || s == 72) && a == 2)
        return 0;
    if ((s == 5 || s == 12 || s == 14 || s == 17 || s == 23 || s == 30 || s == 34 || s == 37 || s == 42 || s == 46 || s == 49 || s == 58 || s == 65 || s == 67 || s == 75) && a == 0)
        return 0;
    if ((s == 4 || s == 17 || s == 18 || s == 19 || s == 20 || s == 24 || s == 25 || s == 31 || s == 37 || s == 38 || s == 42 || s == 49 || s == 50 || s == 54 || s == 56 || s == 75 || s == 77 || s == 78 || s == 79 || s == 80) && a == 1)
        return 0;

    return 1;

}

int GetPolicy(int epsi)
{
  int p = rand() % 101;

  if (p < epsi)
  {
      return 1;
  }
  return 2;
}

int GetNewState(int s,int a)
{
    //valided state with the action selected ----> new state

    //for the action 2
    if ((s == 0 || s == 1 || s == 2 || s == 3 || s == 4 || s == 5 || s == 6 || s == 7) && a == 2)
        return s + 1;
    if ((s == 9 || s == 10 || s == 11 || s == 12 || s == 13 || s == 14 || s == 15 || s == 16) && a == 2)
        return s + 1;
    if ((s == 18 || s == 19 || s == 20 || s == 21 || s == 22 || s == 23 || s == 24 || s == 25) && a == 2)
        return s + 1;
    if ((s == 27 || s == 28 || s == 29 || s == 30 || s == 31 || s == 32 || s == 33 || s == 34) && a == 2)
        return s + 1;
    if ((s == 36 || s == 37 || s == 38 || s == 39 || s == 40 || s == 41 || s == 42 || s == 43) && a == 2)
        return s + 1;
    if ((s == 45 || s == 46 || s == 47 || s == 48 || s == 49 || s == 50 || s == 51 || s == 52) && a == 2)
        return s + 1;
    if ((s == 54 || s == 55 || s == 56 || s == 57 || s == 58 || s == 59 || s == 60 || s == 61) && a == 2)
        return s + 1;
    if ((s == 63 || s == 64 || s == 65 || s == 66 || s == 67 || s == 68 || s == 69 || s == 70) && a == 2)
        return s + 1;
    if ((s == 72 || s == 73 || s == 74 || s == 75 || s == 76 || s == 77 || s == 78 || s == 79) && a == 2)
        return s + 1;

    //for the action 0
    if ((s == 1 || s == 2 || s == 3 || s == 4 || s == 5 || s == 6 || s == 7 || s == 8) && a == 0)
        return s - 1;
    if ((s == 10 || s == 11 || s == 12 || s == 13 || s == 14 || s == 15 || s == 16 || s == 17) && a == 0)
        return s - 1;
    if ((s == 19 || s == 20 || s == 21 || s == 22 || s == 23 || s == 24 || s == 25 || s == 26) && a == 0)
        return s - 1;
    if ((s == 28 || s == 29 || s == 30 || s == 31 || s == 32 || s == 33 || s == 34 || s == 35) && a == 0)
        return s - 1;
    if ((s == 37 || s == 38 || s == 39 || s == 40 || s == 41 || s == 42 || s == 43 || s == 44) && a == 0)
        return s - 1;
    if ((s == 46 || s == 47 || s == 48 || s == 49 || s == 50 || s == 51 || s == 52 || s == 53) && a == 0)
        return s - 1;
    if ((s == 55 || s == 56 || s == 57 || s == 58 || s == 59 || s == 60 || s == 61 || s == 62) && a == 0)
        return s - 1;
    if ((s == 64 || s == 65 || s == 66 || s == 67 || s == 68 || s == 69 || s == 70 || s == 71) && a == 0)
        return s - 1;
    if ((s == 73 || s == 74 || s == 75 || s == 76 || s == 77 || s == 78 || s == 79 || s == 80) && a == 0)
        return s - 1;

    //for the action 3
    if ((s == 0 || s == 9 || s == 18 || s == 27 || s == 36 || s == 45 || s == 54 || s == 63) && a == 3)
        return s + 9;
    if ((s == 1 || s == 10 || s == 19 || s == 28 || s == 37 || s == 46 || s == 55 || s == 64) && a == 3)
        return s + 9;
    if ((s == 2 || s == 11 || s == 20 || s == 29 || s == 38 || s == 47 || s == 56 || s == 65) && a == 3)
        return s + 9;
    if ((s == 3 || s == 12 || s == 21 || s == 30 || s == 39 || s == 48 || s == 57 || s == 66) && a == 3)
        return s + 9;
    if ((s == 4 || s == 13 || s == 22 || s == 31 || s == 40 || s == 49 || s == 58 || s == 67) && a == 3)
        return s + 9;
    if ((s == 5 || s == 14 || s == 23 || s == 32 || s == 41 || s == 50 || s == 59 || s == 68) && a == 3)
        return s + 9;
    if ((s == 6 || s == 15 || s == 24 || s == 33 || s == 42 || s == 51 || s == 60 || s == 69) && a == 3)
        return s + 9;
    if ((s == 7 || s == 16 || s == 25 || s == 34 || s == 43 || s == 52 || s == 61 || s == 70) && a == 3)
        return s + 9;
    if ((s == 8 || s == 17 || s == 26 || s == 35 || s == 44 || s == 53 || s == 62 || s == 71) && a == 3)
        return s + 9;

    //for the action 1
    if ((s == 9 || s == 18 || s == 27 || s == 36 || s == 45 || s == 54 || s == 63 || s == 72) && a == 1)
        return s - 9;
    if ((s == 10 || s == 19 || s == 28 || s == 37 || s == 46 || s == 55 || s == 64 || s == 73) && a == 1)
        return s - 9;
    if ((s == 11 || s == 20 || s == 29 || s == 38 || s == 47 || s == 56 || s == 65 || s == 74) && a == 1)
        return s - 9;
    if ((s == 12 || s == 21 || s == 30 || s == 39 || s == 48 || s == 57 || s == 66 || s == 75) && a == 1)
        return s - 9;
    if ((s == 13 || s == 22 || s == 31 || s == 40 || s == 49 || s == 58 || s == 67 || s == 76) && a == 1)
        return s - 9;
    if ((s == 14 || s == 23 || s == 32 || s == 41 || s == 50 || s == 59 || s == 68 || s == 77) && a == 1)
        return s - 9;
    if ((s == 15 || s == 24 || s == 33 || s == 42 || s == 51 || s == 60 || s == 69 || s == 78) && a == 1)
        return s - 9;
    if ((s == 16 || s == 25 || s == 34 || s == 43 || s == 52 || s == 61 || s == 70 || s == 79) && a == 1)
        return s - 9;
    if ((s == 17 || s == 26 || s == 35 || s == 44 || s == 53 || s == 62 || s == 71 || s == 80) && a == 1)
        return s - 9;
    return -1;
}

int GetNewAction(int policy,vector<vector<float>> q,int s)
{
    int v = 0;
    int action = -1;
    if (policy == 2)
    {
        action = EvalBest(q,s);
        v = ValideState(s,action);

        while (v == 0)
        {
            action = rand() % 4;
            v = ValideState(s,action);
        }
    }
    else
    {
        while (v == 0)
        {
            action = rand() % 4;
            v = ValideState(s,action);
        }
    }
    return action;
}


int CheckWall(int i_pos,int j_pos)
{
  int pos = j_pos * 9 + i_pos;
  vector<int> vect1{4,8,9,10,11,13,15,16,22,28,29,33,35,36,40,41,44,45,47,48,52,53,57,59,60,61,62,64,66,68,69,70,71,73,74};
  vector<int>::iterator it1 = find(vect1.begin(), vect1.end(), pos);
  if (it1 != vect1.end())
    return 1;
  return 0;
}

void Draw(int height, int width, int x_coord, int y_coord)
{
  int i_pos = 0;
  int j_pos = 0;
  system("cls"); // for unix system, replace "cls" by "clear" 
  for (int i=0; i<width; i++)
  {
    cout << "#";
  }
  cout << endl;
  for (int j=1; j<height-1; j++)
  {
      for (int i=0; i<width; i++)
      {
          i_pos = (i-1) / 5;
          j_pos = (j-1) / 3;
          if(i == 0 || i == width - 1)
            cout << "#";
          else if (i == x_coord && j == y_coord)
            cout << "*";
          else if (CheckWall(i_pos,j_pos) == 1)
            cout << "|";
          else if (i == 3 && j == 2)
            cout << "S";
          else if (i == 43 && j == 26)
            cout << "F";
          else
            cout << " ";
      }
      cout << endl;
  }
  for (int i=0; i<width; i++)
  {
    cout << "#";
  }
  cout << endl;
}


void Run(int ep,vector<vector<float>> &q,vector<float> r,int start,int end)
{
    int s = start;

    float alpha = 0.5;
    float gamma = 0.9;
    int restart = 300;

    int e = 0;
    int nbs = 0;
    int policy = -1;
    int action1 = -1;
    int action2 = -1;
    int s0 = -1;



    int height = 29;
    int width = 47;

    int x_coord = 0;
    int y_coord = 0;

    int pinit = 99;

    while (e < ep)
    {
        e++;
        nbs = 0;
        s = start;

        policy = GetPolicy(pinit/(log10(e)+1));
        action1 = GetNewAction(policy,q,s);

        cout << "episode = " << e;
        cout << endl;

        while ((s != end) && nbs < restart )
        {
            x_coord = s % 9 * 5 + 2 + 1;
            y_coord = s / 9 * 3 + 1 + 1;

            if (e == 1 || e == 50 || e == 100 || e == 150 || e == 200 || e == 250 || e == 300 || e == 400 || e == 500)
              Draw(height,width,x_coord,y_coord);

            cout << "episode = " << e;
            cout << endl;

            nbs++;

            s0 = s;
            s = GetNewState(s0,action1);

            policy = GetPolicy(pinit/(log10(e)+1));
            action2 = GetNewAction(policy,q,s);


            if (s == end)
            {
                q[s0][action1] = q[s0][action1] + alpha * r[s];
            }
            else
            {
                q[s0][action1] = q[s0][action1] + alpha * (r[s] + gamma * q[s][action2] - q[s0][action1]);
            }

            action1 = action2;

         }
      }
}
