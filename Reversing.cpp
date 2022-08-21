#include <iostream>
#include<string>

using namespace std;

class Stack
{
private:
    int stackCap;
    int stackSize;
    char *vec;
public:
     Stack(int s)
     {
         vec = new char[s];
         stackSize = 0;
         stackCap = s;
     }

     ~Stack()
     {
         delete[] vec;
     }

     bool isEmpty()
     {
         return stackSize == 0;
     }

     bool isFull()
     {
         return stackSize == stackCap;
     }

     void push(char e)
     {
        if(isFull())
        return;
        vec[stackSize++] = e;
     }

     char pop()
     {
        if(isEmpty())
        return -1;
        return vec[--stackSize];
     }

     void Reverse(string str)
     {
         int cpa = str.length();
         Stack s(cpa);

         for (int i = 0 ; i < cpa ; i++)
          {
             s.push(str[i]) ;
          }
        for (int i = 0; i < cpa ; i++)
        {
            str[i] = s.pop();
        }

        cout << str << endl;
     }

};

int main()
{
    int n;
    cin >> n;
    Stack mystack(n+1);
    string str[n+1];
    for(int i = 0 ; i < n+1 ; i++)
    {
         getline(cin,str[i]);
    }

    for(int i = 0 ; i < n+1 ; i++)
   {
       mystack.Reverse(str[i]);
   }




    return 0;
}
