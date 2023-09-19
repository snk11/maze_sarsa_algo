#include "rewards.h"


rewards::rewards()
{
  vector<float> rtemp(ncase,0);
  r = rtemp;

}


void rewards::print()
{
  int m = r.size();
  int nb1 = 0;
  int nb2 = 0;

  cout << "rewards table:";
  cout << endl;

  for(int i = 0; i < m; i++)
  {
      nb1 = i % 9;
      nb2 = i % 8 - i / 9;

      cout << r[i] << " ";

      if ( nb2 == 0 && nb1 != 0)
        cout<< endl;

  }
}
