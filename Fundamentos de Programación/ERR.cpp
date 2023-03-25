#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int i = 0, j = 0, k = 0;
  string input = "Turpentine and turtles";
  vector<char> vowels = {'a','e','i','o','u'}, result = {};
  for (i = 0; i < input.size();i++)
  {
    for (j = 0; j < vowels.size(); j++)
    {
        if (input[i] == vowels[j])
        {
            result.push_back(input[i]);
            if(input[i] == 'e' || input[i] == 'u')
            result.push_back(input[i]);
        }
    }
  }
  for(k = 0; k < result.size(); k++)
  {
    cout<<result[k];
  }
  return 0;
}