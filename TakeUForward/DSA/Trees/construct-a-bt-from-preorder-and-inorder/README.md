# [45. Construct a BT from Preorder and Inorder](https://takeuforward.org/practice/dsa/construct-a-bt-from-preorder-and-inorder)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given two integer arrays preorder and inorder. Where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree.

Construct and return the binary tree using **in-order** and **preorder arrays** .

### Example 1:

**Input:** preorder = [3, 9, 20, 15, 7] , inorder = [9, 3, 15, 20, 7]

**Output:** [3, 9, 20, null, null, 15, 7]

**Explanation:** The output tree is shown below.

<img src="https://static.takeuforward.org/content/ProblemSetter-J7OHMB3h">

### Example 2:

**Input:** preorder = [3, 4, 5, 6, 2, 9] , inorder =&nbsp;[5, 4, 6, 3, 2, 9]

**Output:** [3, 4, 2, 5, 6, null, 9]

**Explanation:** The output tree is shown below.

<img src="https://static.takeuforward.org/content/ProblemSetter-2FRZ0uID">

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Nodes <= 10^4
- -10^4 <= Node.val <= 10^4
- All values in the given tree are unique.
- Each value of inorder also appears in preorder.
- Preorder is guaranteed to be the preorder traversal of the tree.
- Inorder is guaranteed to be the inorder traversal of the tree.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
