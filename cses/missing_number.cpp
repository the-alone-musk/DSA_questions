
#include <bits/stdc++.h>

using namespace std;

void missing_no ( long int n , vector < long int> inputs)
{
    int sum1=0 ,sum2=0;
  for ( long int i = 0 ; i <  inputs.size() ; i++ ){
    sum1 += inputs[i];
    }
for ( long int j = 1 ; j <= n ; j++ ){
    sum2 += j;
    }
    cout<<sum2-sum1;
  }

int main()
{

    long int n;
    cin >> n;
    vector < long int> inputs;
    for (int i = 0; i < n-1; i++)
    {
        cin >> inputs[i];
    }

    missing_no(n, inputs);
    return 0;
}