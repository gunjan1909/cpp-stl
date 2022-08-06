#include <iostream>
#include <bits/stdc++.h>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;
int main()
{
   // ARRAY
   int arr[3] = {1, 2, 3};
   array<int, 4> a = {1, 2, 3, 4};
   int size = a.size();
   cout << size << endl;
   // a.empty() - returns true if array is empty
   // a.at(2) - returns the element at index 2
   // a.front() - returns the first element
   // a.back() - returns the last element

   // VECTOR
   vector<int> v;
   vector<int> v2(5);    // 5 elements with value 0
   vector<int> v3(5, 1); // 5 elements with value 1
   vector<int> v4(v);    // copy constructor
   v.push_back(1);
   v.push_back(2);
   // v.capacity();  returns the capacity of the vector
   // v.size();  returns the size of the vector - no. of elements in the vector
   // v.at(2);  returns the element at index 2
   // v.front();  returns the first element
   // v.back();  returns the last element
   // v.empty();  returns true if the vector is empty
   // v.resize(n);  resizes the vector to n elements
   // v.reserve(n);  reserves n elements in the vector
   // v.pop_back();  removes the last element from the vector
   // v.clear();  clears the vector- size will be 0 not capacity
   // v.begin();  returns an iterator to the first element
   // v.end();  returns an iterator to the last element

   // DEQUE - doubly ended queue

   deque<int> d;
   deque<int> d2(5);    // 5 elements with value 0
   deque<int> d3(5, 1); // 5 elements with value 1
   // d.push_back(1); // adds element to the back of the deque
   // d.push_front(1); // adds element to the front of the deque
   // d.pop_back(); // removes the last element from the deque
   // d.pop_front(); // removes the first element from the deque
   // d.front(); // returns the first element of the deque
   // d.back(); // returns the last element of the deque
   // d.empty(); // returns true if the deque is empty
   // d.size(); // returns the size of the deque
   // d.erase(d.begin(), d.end()-1); // erases the elements from the deque except last element

   // LIST - doubly ended list
   list<int> l;
   // same with pop
   l.push_back(1);  // adds element to the back of the list
   l.push_front(2); // adds element to the front of the list
   for (int i : l)
   {
      cout << i << endl; // prints 2 1
   }
   l.erase(l.begin()); // erases the first element of the list
   l.size();           // returns the size of the list
   list<int> n(l);     // copy constructor

   // STACK - LIFO - last in first out
   stack<string> s;
   s.push("Gunjan");
   s.push("Ashok");
   s.push("Bhanarkar");
   s.top();   // returns the top element of the stack which is Bhanarkar
   s.pop();   // removes the top element of the stack which is Bhanarkar
   s.size();  // returns the size of the stack
   s.empty(); // returns true if the stack is empty

   // QUEUE - FIFO - first in first out
   queue<string> q;
   q.push("Gunjan");
   q.push("Ashok");
   q.push("Bhanarkar");
   q.front(); // returns the first element of the queue which is Gunjan
   q.back();  // returns the last element of the queue which is Bhanarkar
   q.size();  // returns the size of the queue
   q.pop();   // removes the first element of the queue which is Gunjan

   // PRIORITY QUEUE - priority based queue
   // SAME AS HEAP MAX HEAP MIN HEAP
   priority_queue<int> maxi;                            // max heap
   priority_queue<int, vector<int>, greater<int>> mini; // min heap

   maxi.push(1);
   maxi.push(3);
   maxi.push(2);
   maxi.push(0);
   maxi.top(); // returns the top element of the max heap which is 3
   // maxi.pop();  // removes the top element of the max heap which is 3
   maxi.size(); // returns the size of the max heap
   cout << "\nMAX HEAP priority queue" << endl;
   int nn = maxi.size();
   // print in descending order
   for (int i = 0; i < nn; i++)
   {
      cout << maxi.top() << " ";
      maxi.pop();
   }

   mini.push(5);
   mini.push(1);
   mini.push(0);
   mini.push(4);
   mini.push(3);
   mini.top(); // returns the top element of the min heap which is 0
   // mini.pop();  // removes the top element of the min heap which is 0
   mini.size(); // returns the size of the min heap
   cout << "\nMIN HEAP priority queue" << endl;
   nn = mini.size();
   // print in ascending order
   for (int i = 0; i < nn; i++)
   {
      cout << mini.top() << " ";
      mini.pop();
   }

   cout << " \n\n";

   // SET - unordered set of unique elements
   // ELEMENTS ARE STORED IN SORTED ORDER
   // BST IS USED
   set<int> s1;
   s1.insert(1);
   s1.insert(5);
   s1.insert(6);
   s1.insert(0); // O(log n)
   cout << "\nSET" << endl;
   for (auto i : s1)
   {
      cout << i << " ";
   }

   set<int>::iterator it = s1.begin();
   it++;         // delete second element
   s1.erase(it); // O(log n)
   cout << "\nSET after erasing" << endl;
   for (auto i : s1)
   {
      cout << i << " ";
   }
   cout << "\n5 is present or not? -> " << s1.count(5); // returns 1 if present else 0

   set<int>::iterator itrr = s1.find(5); // returns an iterator to the element if present else end()
   cout << "\nvalue at itrr = " << *itrr;
   cout << endl;

   for (auto it = itrr; it != s1.end(); it++)
   {
      cout << *it << " ";
   }
   cout << endl;

   // MAP - unordered map of key value pairs unique O(log n)
   // unordered map is random hash table O(1)

   map<int, string> m;
   m[1] = "Gunjan";
   m[2] = "Ashok";
   m[10] = "Bhanarkar";

   m.insert({100, "marvelBoy"}); // insert a new element

   cout
       << "\nMAP before erase" << endl;
   for (auto i : m)
   {
      cout << i.first << " " << i.second << endl;
   }

   cout << "finding 13 -> " << m.count(13) << endl;   // no
   cout << "finding 100 -> " << m.count(100) << endl; // yes

   m.erase(2);
   cout << "\nMAP after erase" << endl;
   for (auto i : m)
   {
      cout << i.first << " " << i.second << endl;
   }

   auto itx = m.find(10);
   cout << "from itx m.find(10)" << endl;
   for (auto i = itx; i != m.end(); i++)
   {
      cout << i->first << " " << i->second << endl;
   }
}