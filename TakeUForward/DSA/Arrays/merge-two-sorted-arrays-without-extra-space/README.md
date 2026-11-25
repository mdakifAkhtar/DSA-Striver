# [146. Merge two sorted arrays without extra space](https://takeuforward.org/practice/dsa/merge-two-sorted-arrays-without-extra-space)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given two integer arrays **nums1** and **nums2** . Both arrays are sorted in **non-decreasing** order.

**Merge** **both** the arrays into a **single** array **sorted** in **non-decreasing** order.

- The **final** sorted array should be stored inside the array **nums1** and it should be done in-place.

- **nums1** has a length of **m + n** , where the first **m** elements denote the elements of **nums1** and rest are **0s** .

- **nums2** has a length of **n.**

### Example 1:

**Input:** nums1 = [-5, -2, 4, 5, 0, 0, 0], nums2 = [-3, 1, 8]

**Output:** [-5, -3, -2, 1, 4, 5, 8]

**Explanation:**

The merged array is: [-5, -3, -2, 1, 4, 5, 8], where [-5, -2, 4, 5] are from nums1 and [-3, 1, 8] are from nums2

### Example 2:

**Input:** nums1 = [0, 2, 7, 8, 0, 0, 0], nums2 = [-7, -3, -1]

**Output:** [-7, -3, -1, 0, 2, 7, 8]

**Explanation:**

The merged array is: [-7, -3, -1, 0, 2, 7, 8], where [0, 2, 7, 8] are from nums1 and [-7, -3, -1] are from nums2

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- n == nums2.length.
- m + n == nums1.length.
- 0 <= n, m <= 1000
- -10^4 <= nums1[i], nums2[i] <= 10^4
- Both nums1 and nums2 are sorted in non-decreasing order.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
