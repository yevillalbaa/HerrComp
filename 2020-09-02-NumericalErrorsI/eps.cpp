#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
  cout.precision(7);
  cout.setf(ios::scientific);
  
  int N = atoi(argv[1]);

  float eps = 1.0, one = 1.0;
    
  for( int i = 0; i <= N; i++)
  {
    cout << i << "\t" << one << "\t" << eps << "\n";
    eps = eps/2.0;
    one = 1.0 + eps;    
  }

  return 0;
}
