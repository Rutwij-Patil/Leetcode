#include <vector>
 #include <iostream>
using namespace std ;
int main()
{
    vector <int> nums ;
    cout << "input size of the array "<<endl;
    int n ; int num;
    cin >> n ;
    for(int i = 0; i < n ; i++)
    {
        cin >> num ;
        nums.push_back(num); 
    }
    cout << " Enter target "<<endl;
    int target {0};
    cin >> target ;
    for(int i = 0 ; i < n - 1; i++)
    {
        for(int j = i+1 ; j <n; j++)
        {
            if((nums[i] + nums[j]) == target)
            {
                cout << "["<< i << "," << j << "]" <<endl;
                return 0;
            }
        }
    }

}
