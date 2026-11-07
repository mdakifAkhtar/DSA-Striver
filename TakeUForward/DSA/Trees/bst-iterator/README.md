# [230. BST iterator](https://takeuforward.org/practice/dsa/bst-iterator)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Implement the **BSTIterator** class that represents an iterator over the in-order traversal of a binary search tree (BST):

- **BSTIterator(TreeNode root)** Initializes an object of the BSTIterator class. The root of the BST is given as part of the constructor. The pointer should be initialized to a non-existent number smaller than any element in the BST.

- **boolean hasNext()** Returns true if there exists a number in the traversal to the right of the pointer, otherwise returns false.

- **int next()** Moves the pointer to the right, then returns the number at the pointer.

Notice that by initializing the pointer to a non-existent smallest number, the first call to the next() will return the smallest element in the BST.

Assume that the next() calls will always be valid. That is, there will be at least a next number in the in-order traversal when the next() is called.

### Example 1:

**Input:** &nbsp;[ "BSTIterator" , "next" , "next" , "hasNext" , "next" , "hasNext" , "next" , "hasNext" , "next" , "hasNext" ] , root = [7, 3, 15, null, null, 9, 20]

**Output:** &nbsp;[3, 7, true, 9, true, 15, true, 20, false]

**Explanation:**

BSTIterator bSTIterator = new BSTIterator([7, 3, 15, null, null, 9, 20]);

bSTIterator.next();&nbsp;&nbsp;// return 3

bSTIterator.next();&nbsp;&nbsp;// return 7

bSTIterator.hasNext(); // return True

bSTIterator.next();&nbsp;&nbsp;// return 9

bSTIterator.hasNext(); // return True

bSTIterator.next();&nbsp;&nbsp;// return 15

bSTIterator.hasNext(); // return True

bSTIterator.next();&nbsp;&nbsp;// return 20

bSTIterator.hasNext(); // return False

### Example 2:

**Input:** &nbsp;[ "BSTIterator" , "next" , "next" , "next", "hasNext" , "next" , "hasNext" ] , root = [7, 3, 15, null, null, 9, 20]

**Output:** &nbsp;[3, 7, 9, true, 15, true]

**Explanation:**

BSTIterator bSTIterator = new BSTIterator([7, 3, 15, null, null, 9, 20]);

bSTIterator.next();&nbsp;&nbsp;// return 3

bSTIterator.next();&nbsp;&nbsp;// return 7

bSTIterator.next(); // return 9

bSTIterator.hasNext(); // return True

bSTIterator.next();&nbsp;&nbsp;// return 15

bSTIterator.hasNext(); // return True

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Nodes <= 10^4
- At most 10^4 calls will be made to next and hasNext.
- 0 <= Node.val <= 1054

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
