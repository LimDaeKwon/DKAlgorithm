#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int C = 1;
    
    for(int i=0; i<N; i++)
    {
        C *= 2;
    }
    
    
    cout << C <<endl;
    
    return 0;
}