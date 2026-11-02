# [221. Construct a BT from Postorder and Inorder](https://takeuforward.org/practice/dsa/construct-a-bt-from-postorder-and-inorder)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given two integer arrays Postorder and Inorder. Where Postorder is the postorder traversal of a binary tree and Inorder is the inorder traversal of the same tree.

Construct and return the binary tree using the **postorder** and **inorder** arrays.

### Example 1:

**Input:** postorder = [9, 15, 7, 20, 3] , inorder = [9, 3, 15, 20, 7]

**Output:** [3, 9, 20, null, null, 15, 7]

**Explanation:** The output tree is shown below.

<img src="https://static.takeuforward.org/content/1789462880_b7FCy_Qr.webp">

### Example 2:

**Input:** postorder = [5, 6, 4, 9, 2, 3]&nbsp;, inorder =&nbsp;[5, 4, 6, 3, 2, 9]

**Output:** [3, 4, 2, 5, 6, null, 9]

**Explanation:** The output tree is shown below.

<img src="https://static.takeuforward.org/content/1789462890_xAGzDkto.webp">

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Nodes <= 3000
- -10^4 <= Node.val <= 10^4
- All values in the given tree are unique.
- Each value of inorder also appears in postorder.
- Postorder is guaranteed to be the postorder traversal of the tree.
- Inorder is guaranteed to be the inorder traversal of the tree.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
