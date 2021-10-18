## Binary trees

In computer science, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root. Some authors allow the binary tree to be the empty set as well.

## Key Concepts

- Node: It represents a termination point in a tree.
- Root: A tree’s topmost node. 
- Parent: Each node (apart from the root) in a tree that has at least one sub-node of its own is called a parent node.
- Child: A node that straightway came from a parent node when moving away from the root is the child node.
- Leaf Node: These are external nodes. They are the nodes that have no child.
- Internal Node: As the name suggests, these are inner nodes with at least one child.
- Depth of a Tree: The number of edges from the tree’s node to the root is.
- Height of a Tree: It is the number of edges from the node to the deepest leaf. The tree height is also considered the root height.


## Binary Tree Components

- Data element
- Pointer to left subtree
- Pointer to right subtree

## Types of Binary Trees

- Full Binary Tree

    It is a special kind of a binary tree that has either zero children or two children. It means that all the nodes in that binary tree should either have two child nodes of its parent node or the parent node is itself the leaf node or the external node. 
    In other words, a full binary tree is a unique binary tree where every node except the external node has two children. When it holds a single child, such a binary tree will not be a full binary tree. Here, the quantity of leaf nodes is equal to the number of internal nodes plus one. The equation is like L=I+1, where L is the number of leaf nodes, and I is the number of internal nodes.

- Complete Binary Tree

    A complete binary tree is another specific type of binary tree where all the tree levels are filled entirely with nodes, except the lowest level of the tree. Also, in the last or the lowest level of this binary tree, every node should possibly reside on the left side.
    
- Perfect Binary Tree

    A binary tree is said to be ‘perfect’ if all the internal nodes have strictly two children, and every external or leaf node is at the same level or same depth within a tree. A perfect binary tree having height ‘h’ has 2h – 1 node.
    
- Balanced Binary Tree

    A binary tree is said to be ‘balanced’ if the tree height is O(logN), where ‘N’ is the number of nodes. In a balanced binary tree, the height of the left and the right subtrees of each node should vary by at most one. An AVL Tree and a Red-Black Tree are some common examples of data structure that can generate a balanced binary search tree.
    
## Benefits of a Binary Tree
- The search operation in a binary tree is faster as compared to other trees
- Only two traversals are enough to provide the elements in sorted order
- It is easy to pick up the maximum and minimum elements
- Graph traversal also uses binary trees
- Converting different postfix and prefix expressions are possible using binary trees
