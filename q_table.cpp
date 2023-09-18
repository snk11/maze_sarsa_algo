#include "q_table.h"


q_table::q_table()
{
  vector<vector<float>> qtemp( ncase , vector<float> (naction, 0));
  q = qtemp;

}


void q_table::print()
{

  int m = q.size();
  int n = q[0].size();

  cout<< "qtable:";
  cout<< endl;
  for(int i = 0; i < m; i++)
  {
      cout << "q[" << i << "] = ";
      for(int j = 0; j < n; j++)
      {
          cout << q[i][j] << " ";
      }
      cout<< endl;
  }


}


int q_table::evalBest(int s)
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

int q_table::getNewAction(int policy,int s)
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
