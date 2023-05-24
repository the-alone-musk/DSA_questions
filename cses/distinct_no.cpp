
#include <bits/stdc++.h>

using namespace std;

void distinct_no ( long int n , vector < long int> inputs)
{ int count =1; 
  sort(inputs.begin() , inputs.end());
for ( int i = 1 ; i < n ; i++){
    if (inputs[i]!= inputs[i-1]){
         count ++;
    }
}
cout<<count;
  }

int main()
{

    long int n;
    cin >> n;
    vector < long int> inputs;
     inputs.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> inputs[i];
    }

    distinct_no(n, inputs);
    return 0;
}