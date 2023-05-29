#include <bits/stdc++.h>
#include "algorithm"
using namespace std;
int main()
{
   // BINARY SEARCH
   vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int n = v.size();
   // 0 if not found, 1 if found
   cout << "Finding 5(1-yes/0-no) :" << binary_search(v.begin(), v.end(), 5) << endl;

   // lower bound
   cout << "Lower bound of 6 : " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
   // upper bound
   cout << "Upper bound of 6 : " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

   // MAX MIN SWAP
   int a = 10, b = 20;
   cout << "Max of a and b : " << max(a, b) << endl;
   cout << "Min of a and b : " << min(a, b) << endl;

   swap(a, b);
   cout << "After swap : " << a << " " << b << endl;

   // REVERSE STRING
   string s = "Hello World";
   reverse(s.begin(), s.end());
   cout << "After reverse : " << s << endl;

   // ROTATE
   vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   rotate(v1.begin(), v1.begin() + 5, v1.end());
   cout << "After rotate : ";
   for (auto i : v1)
      cout << i << " ";
   cout << endl;

   // SORT
   vector<int> v2 = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   sort(v2.begin(), v2.end());
   cout << "After sort : ";
   for (auto i : v2)
      cout << i << " ";
   cout << endl;
}
