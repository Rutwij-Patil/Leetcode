#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> a;
    vector <int> b;
    int num{0}; 
    int n{0};
    int med{0}; 
    int num2{0};
    int k{0};
    cout<<"Enter size of first array"<<endl;
    cin >> num;
    for(int i = 0; i < num ; i++){
        cin >> n ;
        a.push_back(n);
    }
    cout<<"Enter size of second array"<<endl;
    cin >> num2;
    for(int i = 0; i < num2 ; i++){
        cin >> n ;
        b.push_back(n);
    }
    int size = num + num2;
    vector<int> ab (size);
    for(int i = 0; i < size; i++){
        if(i<num)
        ab[i] = a[i];
        else if(i >= num){
            ab[i] = b[k];
            k++;
            }
    }
    if(size%2 == 0){
        med = (ab[size/2] + ab[(size/2)+1])/2;
    }
    else
        med = ab[size/2];
    cout<<med;
}
