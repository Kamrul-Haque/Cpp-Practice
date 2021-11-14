#include <iostream>       // std::cout
#include <queue>          // std::queue

int main ()
{
  std::queue<int> foo,bar;
  foo.push (10); foo.push(20); foo.push(30);
  bar.push (111); bar.push(222);

  std::cout << "size of foo: " << foo.size() << '\n';
  std::cout << "size of bar: " << bar.size() << '\n';

  for(int i=0;i<foo.size();i++)std::cout << "foo: " << foo.front()+i << '\n';
  for(int i=0;i<bar.size();i++)std::cout << "bar: " << foo.front()+i << '\n';

  return 0;
}
