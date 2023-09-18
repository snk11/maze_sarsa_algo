#ifndef Q_TABLE_H
# define Q_TABLE_H

#include "header.h"


class q_table
{
    public:
      int ncase = NCASE;
      int naction = NACTION;

      vector<vector<float>> q;

      q_table();
      void print();
      int evalBest(int s);
      int getNewAction(int policy,int s);


};


#endif
