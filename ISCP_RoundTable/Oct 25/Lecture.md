# Tree
Tree is a non linear data structure which simulates a hierarchy.


tree ka level zero se shuru hota hai<br>
height = num of edges from that particular node to its deepest descendant<br>
depth = num of edges from root node to that particular node<br>

for entire tree, height = depth;<br>
but a random node in tree, height != depth (in most cases)<br>


leaves: the nodes which have no child are leaves<br>


## Types of trees:
1. **Binary Tree:**<br>
          Every node will have at most 2 children(i.e., 0 or 1 or 2 children)
### Three different tyes of Binary trees:
1. Strict Binary Tree:<br>
          Every node will have either zero or two children<br>
2. Full Binary Tree:<br>
           If Height of the Tree is 'h' then it should have (2^(h+1) - 1) nodes<br>
           All leaves at same level<br>
           All internal nodes(i.e., non leave nodes) must have 2 children<br>
 
3. Complete Binary Tree:<br>
           All leaves at h or h-1 level<br>
           There shouldnt be missing sequence<br>
           while insertion follow left to right order of any level<br>

# PYQ of Infomatic(A product based company) interview:
1. Find the diameter of a tree


-------------------------------------------------------------------------
TRY data structure 
yeh data structure jo hai bahut jyada values ko store karne mai kaam aayega
jaise ki ek dictionary hai, which has 1 million words, the other standard data structures ki aukkad nai hai
yeh store karne ki,
but if we use TRY data structure then we can easily store it.
-------------------------------------------------------------------------




A, B, C, D, null, F, G, Null, I, Null ,Null,Null, Null, N, Null
