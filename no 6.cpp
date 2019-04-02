#include <iostream>
using namespace std;

int main()
{
  int bil[4][4] = {
  {1,1,1,1},{4,4,4,4},
  {2,2,2,2},{3,3,3,3}};
  for (int a=0;a<4;a++){
  for (int b=0;b<4;b++){
      cout<<bil[a][b]<< " ";
    } cout << endl;
    }
 return 0;
 }
