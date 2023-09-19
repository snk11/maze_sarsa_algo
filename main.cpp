
#include "header.h"

int main()
{
  srand(time(NULL));

  int start = 0;
  int end = 80;

  q_table q1;
  rewards r1;

  r1.r[0] = -100;
  r1.r[7] = -100;
  r1.r[17] = -100;
  r1.r[27] = -100;
  r1.r[65] = -100;
  r1.r[72] = -100;
  r1.r[75] = -100;
  r1.r[80] = 100;

  Run(500,q1.q,r1.r,start,end);

  cout << endl;
  q1.print();
  cout << endl;

  cin.get();
  return 0;
}
