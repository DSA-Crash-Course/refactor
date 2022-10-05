# Linear Search

Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found. It is the simplest searching algorithm.

## How Linear Search Works?

The following steps are followed to search for an element k = 1 in the list below.

![image](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-initial-array.png)

1. Start from the first element, compare k with each element x

![image](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-comparisons.png)

2. If x == k, return the index.

![image](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-found.png)

3. Else, return not found.

## Linear Search Algorithm

```
LinearSearch(array, key)
  for each item in the array
    if item == value
      return its index
```

## Java Syntax for Linear Search

```
// Linear Search in Java

class LinearSearch {
  public static int linearSearch(int array[], int x) {
  int n = array.length;

  // Going through array sequencially
  for (int i = 0; i < n; i++) {
    if (array[i] == x)
    return i;
  }
  return -1;
  }

  public static void main(String args[]) {
  int array[] = { 2, 4, 0, 1, 9 };
  int x = 1;

  int result = linearSearch(array, x);

  if (result == -1)
    System.out.print("Element not found");
  else
    System.out.print("Element found at index: " + result);
  }
}
```

## Linear Search Complexities
Time Complexity: O(n)
<br>
Space Complexity: O(1)

## Linear Search Applications
For searching operations in smaller arrays (<100 items).

