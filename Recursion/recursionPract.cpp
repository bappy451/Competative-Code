#include<bits/stdc++.h>
using namespace std;


void foo(int n)
{
    if(n<1) return;
    foo(n-1);
    printf("hello %d\n",n);
}

int main()
{
    foo(5);

    std::stack<int> mystack;

  mystack.push(10);
  mystack.push(20);

  //mystack.top() -= 5;

  std::cout << "mystack.top() is now " << mystack.size() << '\n';
  std::cout << "mystack.top() is now " << mystack.pop() << '\n';


    return 0;
}
