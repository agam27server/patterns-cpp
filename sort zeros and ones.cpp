#include <iostream>
#include <vector>
using namespace std;


int main() {
  vector<int>arr{1,0,0,1,1,0,1,1,0,1};

  int start = 0;
  int end = arr.size()-1;
  int i = 0;

  while(start<end){
    if(arr[i]==0){
      swap(arr[start],arr[i]);
      i++;
      start++;
    }
    if(arr[i]==1){
      swap(arr[end],arr[i]);
      end--;     //here we do not increment i in this if condition because start get new element and now we have to check that element too.
    }
  }

  for(auto val: arr){
    cout<< val <<" ";
  }
}