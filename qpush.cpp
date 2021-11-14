#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue

using namespace std;

int main ()
{
  queue<int> myqueue[5];
  int myint;

  cout << "Please enter some integers (enter 0 to end):\n";

  for(int i=0;i<3;i++)
  {
    do {
    cin >> myint;
    myqueue[i].push(myint);
    } while (myint);
  }

  cout << "myqueue contains: ";
  for(int i=0;i<3;i++)
  {
    while (!myqueue[i].empty())
    {
    std::cout << ' ' << myqueue[i].front();
    myqueue[i].pop();
    }
    cout<< '\n' ;
  }


  return 0;
}
