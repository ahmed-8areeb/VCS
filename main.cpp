#include <iostream>
#include <vector>
using namespace std;

int vectorSum(vector<int> v)
{
  int sum = 0;
  for (int i = 0; i < v.size(); i++)
  {
    sum += v[i];
  }
  return sum;
}

int vectorAverage(vector<int> v)
{
  int sum = 0;
  for (int i = 0; i < v.size(); i++)
  {
    sum += v[i];
  }
  return sum / v.size();
  int vectorMin(vector<int> v)
  {
    int min = v[0];
    for (int i = 1; i < v.size(); i++)
    {
      if (v[i] < min)
      {
        min = v[i];
      }
    }
    return min;
  }

  int main()
  {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << vectorSum(v) << endl;
    cout << vectorAverage(v) << endl;
    cout << vectorMin(v) << endl;
    return 0;
  }