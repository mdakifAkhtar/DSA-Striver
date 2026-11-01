# [234. Flatten Binary Tree to Linked List](https://takeuforward.org/practice/dsa/flatten-binary-tree-to-linked-list)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

You are given the root of a binary tree.

Re-arrange the tree in place so that it becomes a singly linked list in-order of a preorder traversal:

- Each node’s right pointer must point to the next node in preorder.

- Each node’s left pointer must be set to null.

- The relative order of nodes must be exactly the preorder sequence of the original tree.

The transformation must be done on the original tree structure; do not create any new nodes.

### Example 1:

**Input:** root = [1,2,5,3,4,null,6]

**Output:** [1,null,2,null,3,null,4,null,5,null,6]

**Explanation:**

Preorder of original tree: 1-2-3-4-5-6 → the same order appears in the list.

### Example 2:

**Input:** &nbsp;root = []

**Output:** []

**Explanation:** An empty tree stays empty.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 ≤ number of nodes ≤ 2000
- -100 ≤ Node.val ≤ 100

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
