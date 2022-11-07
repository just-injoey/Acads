Lecturer: Ravinder TT

# Binary Tree Traversal

PreOrder, InOrder, PostOrder traversals use Stack. <br>
Level Order Traversal uses Queue. <br>

```
Question 1

           A
          /\
         B  C
        /
       D  
PreOrder: A, B, D, C
Inorder: D, B, A, C
PostOrder: D, B, C, A
```
```
Question 2


                      A
                      /\
                     B  C
                    /   /\ 
                   D   E    F
                        \  /\
                         G H I

Preorder: A, B, D, C, E, G, F, H, I
Inorder: D, B, A, E, G, C, H, F, I
PostOrder: D, B, G, E, H, I, F, C, A
Level order: A, B, C, D, E, F, G, H, I
```
```
Question 3
                      
                      +
                     /\
                    *  c
                   /\
                  a  b



Preorder: +, *, a, b, c
Inorder: a, *, b, +, c
PostOrder: a, b, *, c, +

```
```
Question 4
Create BST for the given array of values:
67, 12, 89, 34, 6, 27, 39, 48, 92

                      67
                      /\
                    12  89
                    /\   \   
                   6 34   92
                     /\
                    27 39
                        \
                        48
```


# Note:Solve till question R of the Hackerrank questions before next class

