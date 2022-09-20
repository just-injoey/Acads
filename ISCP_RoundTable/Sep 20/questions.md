1. How do you find pair of elements in an array to give a particular sum.

```
Brute Force approach(using 2 for loops)
brute force logic mai 2 for loops


TIme Complexity = O(n^2)
```

```
# Using Binary Search
for(i=0; i<n; i++){
    d = sum - a[i]
    int flag = binarySearch(a,n,d);
    if(flag != -1)
        return 1;
}


TIme Complexity = O(nlogn)
```


```
# Using Hash Maps
Agar searching ke liye hash map use kare, then it will have more bettr time complexity

TIme Complexity = O(n)
```


