#include <bits/stdc++.h>

using namespace std;

struct Student{
  string name;
  char region;
  unsigned distance;
};



bool operator==(Student& a, Student& b) {
  return (a.distance == b.distance and a.region == b.region and a.name == b.name);}

bool operator<(Student& a, Student& b){
  if (a.distance < b.distance) return true;
  if (a.distance > b.distance) return false;
  if (a.region < b.region) return true;
  if (a.region > b.region) return false;
  return (a.name < b.name);
}
bool operator>=(Student& a, Student& b) { return not (a < b); }
bool operator<=(Student& a, Student& b) { return a < b or a == b; }
bool operator>(Student& a, Student& b)  {return not(a <= b) ;}

int partition(auto arr[], int low, int high){

  auto pivot = arr[high];

  int i = low - 1;
  for (int j = low; j <= high; j++) {
    if (arr[j] < pivot)
    {
      i++;
      swap( arr[i], arr[j] );
    }
  }
  swap( arr[i+1], arr[high]);
  return i+1;
}

void quickSort(auto arr[], int low, int high){
  if (low < high) {
    int p = partition(arr, low, high);
    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
  }
}

int main() {
  int q;
  vector<string> results;
  while (cin >> q)
  {

    Student array[q];
    for (int i=0; i < q; i++) {
      Student student;
      cin >> student.name >> student.region >> student.distance;
      array[i] = student;
    }

    quickSort(array, 0, q - 1);

    for (auto student : array){
      results.push_back(student.name);
    }
  }

  for (auto result : results) cout << result << endl;
  return 0;
}
