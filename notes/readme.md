# MY COMPETITIVE PROGGRAMING NOTEBOOK


    This .md file was made so i could print it and use in competitions. It may
    have some basic topics, but i choose to note even the most basic stuff
    because is possible that automation and shortcuts made me forget how to
    actually do it.


--------------------------------------------------------------------------------

## COMPILING C++:


    g++ source-path-name -o bin-path-name --std=c++(version)


--------------------------------------------------------------------------------

## USEFULL REMINDINGS:

```cpp
    // HOW TO SET PRECISION
    #include <iomanip>
    cout << fixed << setprecision(1) << x << "\n";
    //

    #define PI M_PI
    #include <bits/stdc++.h>

    using namespace std;

    int main() {
    return 0;
    }

```

--------------------------------------------------------------------------------

## BASIC DATA TYPES:


```cpp
    int max_int = std::numeric_limits<int>::max();


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






# CONTAINERS:

```cpp



-------------------------------------------------------------------------------
    // VECTOR IN C++
    vector<class Type> vector_name;

    // Element Access:
    vec[i];                 // Access element.
    vec.at(i);              // Access element.
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
-------------------------------------------------------------------------------

    // STACK C++
    stack<class Type> stack_name;

    empty()     // Test whether container is empty (public member function)
    size()      // Return size (public member function)
    top()       // Access next element (public member function)
    push()      // Insert element (public member function)
    emplace()   // Construct and insert element (public member function)
    pop()       // Remove top element (public member function)


-------------------------------------------------------------------------------

    // QUEUE IN C++
    queue<class Type> queue_name;

    empty()     // Test whether container is empty
    size()      // Return size
    front()     // Access next element
    back()      // Access last element
    push()      // Insert element
    emplace()   // Construct and insert element
    pop()       // Remove next element

-------------------------------------------------------------------------------

    // PRIORITY QUEUE IN C++
    priority_queue<class Type> queue_name;

    empty()     // Test whether container is empty
    size()      // Return size
    top()       // Access top element
    push()      // Insert element
    emplace()   // Construct and insert element
    pop()       // Remove next element

-------------------------------------------------------------------------------

    // DEQUE IN C++
    deque<class Type> deque_name;

    // Iterators:
    begin()         // Return iterator to beginning (public member function)
    end()           // Return iterator to end (public member function)

    // Capacity:
    size()          // Return size (public member function)
    max_size()      // Return maximum size (public member function)
    empty()         // Test whether container is empty (public member function)

    // Element access:
    operator[]()    // Access element (public member function)
    at()            // Access element (public member function)
    front()         // Access first element (public member function)
    back()          // Access last element (public member function)

    // Modifiers:
    push_back()     // Add element at the end (public member function)
    push_front()    // Insert element at beginning (public member function)
    pop_back()      // Delete last element (public member function)
    pop_front()     // Delete first element (public member function)
    erase()         // Erase elements (public member function)
    // erase the 6th element
    mydeque.erase (mydeque.begin()+5);
    // erase the first 3 elements:
    mydeque.erase (mydeque.begin(),mydeque.begin()+3);
    clear()         // Clear content (public member function)
    emplace()       // Construct and insert element (public member function)
    emplace_front() // Construct and insert element at beginning
    emplace_back()  // Construct and insert element at the end

-------------------------------------------------------------------------------

    // MAP IN C++
    map<Key_Type, Value_Type> map_name;

    //Iterators:
    begin()     // Return iterator to beginning
    end()       // Return iterator to end

    // Capacity:
    empty()     // Test whether container is empty
    size()      // Return container size
    max_size()  // Return maximum size

    // Element access:
    operator[]  // Access element
    at()        // Access element

    // ex:
    std::map<std::string,int> mymap = {
                    { "alpha", 0 },
                    { "beta", 0 },
                    { "gamma", 0 } };

    mymap.at("alpha") = 10;
    mymap.at("beta") = 20;
    mymap.at("gamma") = 30;

    // Modifiers:
    insert()        // Insert elements
    // ex:
    mymap.insert ( std::pair<char,int>('a',100) );
    mymap.insert ( std::pair<char,int>('z',200) );

    erase()         // Erase elements
    clear()         // Clear content
    emplace()       // Construct and insert element

    // ex:
    std::map<char,int> mymap;
    mymap.emplace('x',100);

    // Operations:
    find()          // Get iterator to element
    // ex:
        std::map<char,int> mymap;
        std::map<char,int>::iterator it;

        mymap['a']=50;
        mymap['b']=100;
        mymap['c']=150;
        mymap['d']=200;

        it = mymap.find('b');

    count()         // Count elements with a specific key

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

    lower_bound()   // Return iterator to lower bound
    upper_bound     // Return iterator to upper bound

        std::map<char,int>::iterator itlow,itup;

        mymap['a']=20;
        mymap['b']=40;
        mymap['c']=60;
        mymap['d']=80;
        mymap['e']=100;

        itlow=mymap.lower_bound ('b');  // itlow points to b
        itup=mymap.upper_bound ('d');   // itup points to e (not d!)

```
# ALGORITHMS

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

// KNAPSACK

int knapsack(int maxWeight, int* weights, int* values, int n) {
  if (n == 0 || maxWeight == 0) return 0;

  if (weights[n-1] > maxWeight){
    return knapsack(maxWeight, weights, values, n-1);
  }

  return max(
      values[n - 1] + knapsack(maxWeight - weights[n - 1], weights, values, n - 1),
      knapsack(maxWeight, weights, values, n - 1)
      );
}

// UNBOUNDED KNAPSACK

int unboundedKnapsack(int W, int n, int val[], int wt[]){
  vector<int> dp(W + 1, 0);

  for (int i=0; i<=W; i++){
    for (int j=0; j<n; j++){
      if (wt[j] <= i) {
        dp[i] = max(
            dp[i],
            dp[i-wt[j]] + val[j]
            );
      }
    }
  }
  return dp[W];
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
