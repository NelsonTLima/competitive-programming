 MY COMPETITIVE PROGRAMMING NOTEBOOK
by: Nelson Lima

    This .md file was created so I could print it and use it in competitions. It
    may cover some basic topics, but I chose to note even the most basic stuff
    because it's possible that automation and shortcuts have made me forget how
    to actually do it.

<br>

## Compiling C++:

```bash
    g++ source-path-name -o bin-path-name --std=c++(version)
```

## Useful remindings:


### Initialization:

```cpp
    #include<iostream>          // Standard I/O C++ library.

    #include <bits/stdc++.h>    // bits/stdc++.h includes all standard libs.
                                // including iostream, but it's important
                                // to know wich ones you're using.

    using namespace std;        // So you won't neet to write std::foo.

    int main() {                // Finaly start the main function.

    return 0;
    }
```

### How to set precision:

```cpp
#include <iomanip>      // If you have to import the actual library.
cout << fixed << setprecision(1) << x << "\n";
```

### PI:

Actually there's a constant for pi wich is M_PI,
but it's a common practice to change to PI:

```cpp
#define M_PI PI
```

<br>

## Std sorting:

```cpp
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

bool myfunction (int i,int j) { return (i<j); }

struct myclass {
    bool operator() (int i,int j) { return (i<j);}
} myobject;

int main () {
  int myints[] = {32,71,12,45,26,80,53,33};
  std::vector<int> myvector (myints, myints+8); // 32 71 12 45 26 80 53 33

  // using default comparison (operator <):
  std::sort (myvector.begin(), myvector.begin()+4);
                                                // (12 32 45 71)26 80 53 33

  // using function as comp
  std::sort (myvector.begin()+4, myvector.end(), myfunction);
                                                // 12 32 45 71(26 33 53 80)

  // using object as comp
  std::sort (myvector.begin(), myvector.end(), myobject);
                                                //(12 26 32 33 45 53 71 80)

  return 0
}
```

## BASIC DATA TYPES:

```cpp

// How to get the max and min from each type:
#include <limits>
int max_int = std::numeric_limits<class Type>::max();

// Values:
char - 8 bits
    min : - 128 (signed)
    max :   255 (unsigned)
    sn  :   10^2

int - 32 bits
    min : - 2,147,483,648 (signed)
    max :   4,294,967,295 (unsigned)
    sn  :   10^9

long - 64 bits
    min : - 9,223,372,036,854,775,808  (signed)
    max :   18,446,744,073,709,551,615 (unsigned)
    sn  :   10^19
```

## STANDARD DATA STRUCTURES:

### Array

```cpp
    #include <array>
    std::array<class T>, size_t N> arr;

    // Iterators
    arr.begin();            // Return iterator beginning.
    arr.end();              // Return iterator to end.
    arr.rbegin();           // Return reverse iterator to reverse beginning.
    arr.rend();             // Return reverse iterator do reverse end.

    // Capacity
    arr.size();             // Return size.
    arr.max_size();         // Return maximum size.
    arr.empty();            // Checks if the vector is empty.

    // Element access
    operator[]              // Access element.
    arr.at();               // Access element.
    arr.front();            // Access first element.
    arr.back();             // Access last element.
```

### Vector:

```cpp
    #include <vector>
    std::vector<class Type> vec;

    // Element Access:
    operator[];             // Access element.
    vec.at();               // Access element.
    vec.front();            // Access first element.
    vec.back();             // Access last element.

    // Iterators
    vec.begin();            // Return iterator beginning.
    vec.end();              // Return iterator to end.

    // Capacity
    vec.size();             // Return size.
    vec.max_size();         // Return maximum size.
    vec.empty();            // Checks if the vector is empty.

    // Modifiers
    vec.push_back(element); // Add element at the end.
    vec.pop_back();         // Removes the last element.

    // erase the 6th element
    vec.erase (myvector.begin()+5);
    // erase the first 3 elements:
    vec.erase (myvector.begin(),myvector.begin()+3);
```

### Map:

```cpp
    #include <map>
    map<class Key_Type, class Value_Type> mp;

    //Iterators:
    mp.begin();     // Return iterator to beginning
    mp.end();       // Return iterator to end

    // Capacity:
    mp.empty();     // Test whether container is empty
    mp.size();      // Return container size
    mp.max_size();  // Return maximum size

    // Element access:
    operator[]      // Access element
    mp.at();        // Access element

    // ex:
    std::map<std::string,int> mymap = {
        { "alpha", 0 },
        { "beta", 0 },
        { "gamma", 0 }
    };

    mymap.at("alpha") = 10;
    mymap.at("beta") = 20;
    mymap.at("gamma") = 30;

    // Modifiers:
    insert()        // Insert elements.
    // ex:
    mymap.insert ( std::pair<char,int>('a',100) );
    mymap.insert ( std::pair<char,int>('z',200) );

    erase()         // Erase elements.
    clear()         // Clear content.
    emplace()       // Construct and insert element.

    // ex:
    std::map<char,int> mymap;
    mymap.emplace('x',100);

    // Operations:
    find()          // Get iterator to element.
    // ex:
        std::map<char,int> mymap;
        std::map<char,int>::iterator it;

        mymap['a']=50;
        mymap['b']=100;
        mymap['c']=150;
        mymap['d']=200;

        it = mymap.find('b');

    count()         // Count elements with a specific key.

    mymap ['a']=101;
    mymap ['c']=202;
    mymap ['f']=303;

    for (c='a'; c<'h'; c++)
    {
        std::cout << c;
        if (mymap.count(c)>0)
        std::cout << " is an element of mymap.\n";
        else
        std::cout << " is not an element of mymap.\n";
    }

    lower_bound()   // Return iterator to lower bound.
    upper_bound     // Return iterator to upper bound.

        std::map<char,int>::iterator itlow,itup;

        mymap['a']=20;
        mymap['b']=40;
        mymap['c']=60;
        mymap['d']=80;
        mymap['e']=100;

        itlow=mymap.lower_bound ('b');  // itlow points to b
        itup=mymap.upper_bound ('d');   // itup points to e (not d!)

```


### Stack:

```cpp
    #include <stack>
    stack<class Type> stack_name;

    stk.empty()     // Test whether container is empty.
    stk.size()      // Return size.
    stk.top()       // Access next element.
    stk.push()      // Insert element.
    stk.emplace()   // Construct and insert element.
    stk.pop()       // Remove top element.
```

### Queue:

```cpp
    #include <queue>
    queue<class Type> queue_name;

    q.empty()     // Test whether container is empty
    q.size()      // Return size
    q.front()     // Access next element
    q.back()      // Access last element
    q.push()      // Insert element
    q.emplace()   // Construct and insert element
    q.pop()       // Remove next element
```

### Priority Queue:

```cpp
    #include <queue>
    priority_queue<class Type> queue_name;

    pq.empty()     // Test whether container is empty
    pq.size()      // Return size
    pq.top()       // Access top element
    pq.push()      // Insert element
    pq.emplace()   // Construct and insert element
    pq.pop()       // Remove next element
```

### Deque:

```cpp
    #include <deque>
    deque<class Type> deque_name;

    // Iterators:
    dq.begin()         // Return iterator to beginning.
    dq.end()           // Return iterator to end.

    // Capacity:
    dq.size()          // Return size.
    dq.max_size()      // Return maximum size.
    dq.empty()         // Test whether container is empty.

    // Element access:
    operator[]()        // Access element.
    dq.at()             // Access element.
    dq.front()          // Access first element.
    dq.back()           // Access last element.

    // Modifiers:
    dq.push_back()     // Add element at the end.
    dq.push_front()    // Insert element at beginning.
    dq.pop_back()      // Delete last element.
    dq.pop_front()     // Delete first element.
    dq.erase()         // Erase elements.
    dq.clear()         // Clear content.
    dq.emplace()       // Construct and insert element.
    dq.emplace_front() // Construct and insert element at beginning.
    dq.emplace_back()  // Construct and insert element at the end.

    // Examples:

    // erase the 6th element
    mydeque.erase (mydeque.begin()+5);
    // erase the first 3 elements:
    mydeque.erase (mydeque.begin(),mydeque.begin()+3);
```

<br><br><br>

## Pair:

```cpp
// pair::pair example
#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string
#include <iostream>     // std::cout

int main () {
  // default constructor
  std::pair <std::string,double> product1;
  // value init
  std::pair <std::string,double> product2 ("tomatoes",2.30);
  // copy constructor
  std::pair <std::string,double> product3 (product2);
  // using make_pair (move)
  product1 = std::make_pair(std::string("lightbulbs"),0.99);

  product2.first = "shoes";                  // the type of first is string
  product2.second = 39.90;                   // the type of second is double

  std::cout << "The price of " << product1.first << " is $"
  << product1.second << '\n';

  std::cout << "The price of " << product2.first << " is $"
  << product2.second << '\n';
  std::cout << "The price of " << product3.first << " is $"
  << product3.second << '\n';
  return 0;
}
```

# ALGORITHMS

## SORTING ALGORITHMS

## ALGORITHMS OVER ARRAYS

## NUMBERS' THEORY

## CLASSICAL PROBLEMS

## ALGORITHMS OVER GRAPHS

```cpp

#define INF std::numeric_limits<long>::max()

using namespace std;

vector<long> dijkstra(vector<vector<pair<long, long>>> &graph, long source, long end) {
  // vector<int> previous_vertices(graph.size(), INF);  // ->  if you want to trace path.
  vector<long> shortest_distances(graph.size(), INF);
  priority_queue<pair<long, long>, vector<pair<long, long>>, greater<pair<long, long>>> pq;

  shortest_distances[source] = 0;
  pq.push({0, source});

  while (!pq.empty()) {

    long current_distance = pq.top().first;
    long current_vertex = pq.top().second;
    pq.pop();

    if (current_distance > shortest_distances[current_vertex]) continue;

    for (const auto& neighbor : graph[current_vertex]){
      long neighbor_vertex = neighbor.first;
      long edge_weight = neighbor.second;

      if (shortest_distances[current_vertex] + edge_weight < shortest_distances[neighbor_vertex]) {
        shortest_distances[neighbor_vertex] = shortest_distances[current_vertex] + edge_weight;
        // previous_vertices[neighbor_vertex] = current_vertex;
        pq.push({shortest_distances[neighbor_vertex], neighbor_vertex});
      }
    }
  }
  // return previous_vertices;
  return shortest_distances;
}

// SHORTEST PATH WITH PRIORITY QUEUE - USES TOO MUCH MEMORY
vector<int> dijkstra(vector<vector<pair<int, int>>> &graph, int source, int end) {

  vector<int> predecessors(graph.size(), -1);
  vector<int> shortest_distances(graph.size(), INF);
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

  shortest_distances[source] = 0;
  pq.push({0, source});

  while (!pq.empty()) {

    int current_distance = pq.top().first;
    int current_vertex = pq.top().second;
    pq.pop();

    if (current_vertex == end) {
      vector<int> path;
      while (current_vertex != -1) {
        path.push_back(current_vertex);
        current_vertex = predecessors[current_vertex];
      }
      reverse(path.begin(), path.end());
      return path;
    }

    if (current_distance > shortest_distances[current_vertex]) continue;

    for (const auto& neighbor : graph[current_vertex]){
      int neighbor_vertex = neighbor.first;
      int edge_weight = neighbor.second;

      if (shortest_distances[current_vertex] + edge_weight < shortest_distances[neighbor_vertex]) {
        shortest_distances[neighbor_vertex] = shortest_distances[current_vertex] + edge_weight;
        predecessors[neighbor_vertex] = current_vertex;
        pq.push({shortest_distances[neighbor_vertex], neighbor_vertex});
      }
    }
  }
  return {-1};
}


// DIJKSTRA WITHOUT PQ

int closest_avaliable(vector<int> &shortest_distances, vector<int> visited){

}




```


```cpp

// PRIME NUMBERS

    bool isPrime(int x){

    if (x == 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    for (int i=3; i * i <= x; i+=2){
        if (x % i == 0) return false;
    }
    return true;
    }

  // Crivo.
  bool is_prime[1000000 + 1];

  for( int i=2; i<= 1000000 ; i++ ) is_prime[i] = true;

  for( int64_t i=2; i<=1000000 ; i++ ){
    if( not is_prime[i] ) continue;
    for( int64_t j=i*i; j <= 1000000; j+=i ) is_prime[j] = false;
  }

// DIVISORS

long* getDivisors(long n){
  long sqr = sqrt(n);
  long* arr = (long *)malloc(sizeof(long) * sqr * 2);

  int c=0;
  for (int i=1; i <= sqr; i++){
    if (n % i == 0) {
      arr[c] = i;
      c++;
    }
  }

  for (int i=0; i < c-1; i++){
    arr[c + i] = n / arr[c-i-1];
  }
  arr[(2 * c) - 1] = -1;
  return arr;
}


// GCD
// C++ HAS AN STD ALREADY

int gcd(int a, int b)
{
  int result = min(a, b);
  while (result > 0) {
    if (a % result == 0 && b % result == 0) {
      break;
    }
    result--;
  }
  return result;
}


// MODULAR EXPONENCIATION

int modularExponentiation(int a, int b, int n) {
  int result = 1;
  a = a % n;
  while (b > 0) {
    if (b % 2 == 1) {
      result = (result * a) % n;
    }
    b = b >> 1;
    a = (a * a) % n;
  }
  return result;
}

// FACTORIAL

long long factorial(long long n){
  if (n == 0){
    return 1;
  }

  for (long long i=n; i > 1; i--){
    n *= i-1 ;
  }
  return n;
}

// FIBONACCI

int recursive_fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int fib(int n) {
    int a = 0, b = 1;
    int temp;

    if (n == 0) return a;

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

long* fib_max_restriction(long max){
  // FIBONACCI WITH MAX RESTRICTION. RETURNS AN ARRAY THAT STOPS WITH -1.
  int capacity = 2;
  long* arr = (long*)malloc(capacity * sizeof(long));

  arr[0] = 0;
  arr[1] = 1;
  int i=2;
  for (; arr[i-1] + arr[i-2] < max; i++) {
    if (i+1 >= capacity) {
      capacity *= 2;
      arr = (long*)realloc(arr, capacity * sizeof(long));
    };
    arr[i] = arr[i-1] + arr[i-2];
  }
  arr[i] = -1;
  return arr;
}


// STD SORT
sort(arr, arr + (sizeof(arr) / sizeof(arr[0])));
sort(begin(), end(), comp);


// QUICK SORT

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

// BUBBLE SORT

void bubbleSort(int arr[], int size){
  int tmp;
  for (int i=0; i < size; i++){
    for (int j=i+1; j < size; j++){
      if (arr[i] > arr[j]){
        tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
      }
    }
  }
}

//  BINARY SEARCH

// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 0) {
        return;
    }

    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod
         << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

// PREFIX SUM

// Fills prefix sum array
void fillPrefixSum(int arr[], int n, int prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}

// MAX CONTIGUOUS SUBARRAY:

int maxCrossingSubarray(int arr[], int begin, int mid, int end){
  int maxSum = numeric_limits<int>::min();

  int sum = 0;
  for (int i = mid; i >= begin; i--){
    sum = sum + arr[i];
    maxSum = max(sum, maxSum);
  }

  sum = maxSum;
  for (int i=mid + 1; i <= end; i++){
    sum = sum + arr[i];
    maxSum = max(sum, maxSum);
  }
  return maxSum;
}

int maxContiguousSubarray(int arr[], int begin, int end) {
  if (begin == end) return arr[begin];

  int mid = (begin + end) / 2;
  int left = maxContiguousSubarray(arr, begin, mid);
  int right = maxContiguousSubarray(arr, mid + 1, end);
  int cros = maxCrossingSubarray(arr, begin, mid, end);

  return max(cros, max(left, right));
}

// KNAPSACK - do not repeat items.

int recknapsack(int capacity, int* weights, int* values, int n) {
  if (n == 0 || capacity == 0)
    return 0;

  if (weights[n-1] > capacity)
    return recknapsack(capacity, weights, values, n - 1);

  return max(
      values[n-1] + recknapsack(capacity - weights[n-1], weights, values, n-1),
      knapsack(capacity, weights, values, n-1)
      );
}

int knapsack(int maxCost, int *prices, int *pages, int i, int **dp) {
  if (i < 0) return 0;
  if (dp[i][maxCost] != -1) return dp[i][maxCost];

  if (prices[i] > maxCost)
    return dp[i][maxCost] = knapsack(maxCost, prices, pages, i - 1, dp);

  return dp[i][maxCost] = max(
      pages[i] + knapsack(maxCost - prices[i], prices, pages, i - 1, dp),
      knapsack(maxCost, prices, pages, i - 1, dp)
      );
}

// Bottom-up knapsack

int knapsack(int capacity, int* weights, int* values, int n) {
  int dp[capacity + 1];
  memset(dp, 0, sizeof(dp));

  for (int i = 1; i < n + 1; i++) {
    for (int weight = capacity; weight >= 0; weight--) {
      if (weights[i - 1] <= weight)
        dp[weight] = max(dp[weight], dp[weight - weights[i-1]] + values[i-1]);
    }
  }
  return dp[capacity];
}


// UNBOUNDED KNAPSACK - repeat items allowed.

int unboundedKnapsack(int capacity, int n, int values[], int weights[]) {
  int dp[W + 1];
  memset(dp, 0, sizeof(dp));

  for (int i = 0; i <= capacity; i++) {
    for (int j = 0; j < n; j++) {
      if (weights[j] <= i) {
        dp[i] = max(
            dp[i],
            dp[i - weights[j]] + values[j]
            );
      }
    }
  }
  return dp[W];
}



//  BFS
void bfs(int vertex){
  queue<int> q;
  q.push(vertex);
  VISITED[vertex] = 1;
  while (!q.empty()){
    int f = q.front();
    q.pop();
    for (int next : GRAPH[f]){
      if (!VISITED[next]){
        VISITED[next] = 1;
        q.push(next);
      }
    }
  }
}

// dfs
void dfs(int vertix) {
  VISITED[vertice] = true;
  for (int next : GRAPH[vertix]) {
    if (!VISITED[next]) {
      dfs(next);
    }
  }
}

```
```vim
set number
set signcolumn=yes
set clipboard=unnamed
set mouse:a
colorscheme slate
syntax on
set list lcs=tab:\|\ ,trail:~
set autoindent
set smartindent
set shiftround
set expandtab
set backspace=indent,eol,start

function! CompileAndRunCode()
    if &filetype == "python"
    exec "!clear &&printf '\e[3J' ; python3 %"
    elseif &filetype == "c"
    exec "!clear &&printf '\e[3J' ; gcc -o %:r %;./%:r"
    elseif &filetype == "cpp"
    exec "!clear &&printf '\e[3J' ; g++ --std=c++17 -o %:r %;./%:r"
    else
    echo "Filetype not Supported"
    endif
    endfunction

    imap <F5> <esc>:call CompileAndRunCode()<CR>
    map <F5> <esc>:call CompileAndRunCode()<CR>

    ```
