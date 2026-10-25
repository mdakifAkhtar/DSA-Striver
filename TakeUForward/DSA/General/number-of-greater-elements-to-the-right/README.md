# [864. Number of Greater Elements to the Right](https://takeuforward.org/practice/dsa/number-of-greater-elements-to-the-right)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

You are given an integer array **arr[]** of length **n** and an array of queries **indices[]** containing positions in **arr** .

For each query i, determine the number of elements in **arr** that are **strictly greater** **than arr[indices[i]]** and appear to its **right (after position indices[i])** .

Return an **array** of answers where the j^th value corresponds to the result for indices[j].

### Example 1:

**Input:** arr = [3, 4, 2, 7, 5, 8, 10, 6], indices = [0, 5]

**Output:** [6, 1]

**Explanation:**

- **For index 0 → arr[0] = 3** , elements greater than 3 to its right are [4, 7, 5, 8, 10, 6] → **count = 6** .
- **For index 5 → arr[5] = 8** , greater elements to the right are [10] → **count = 1** .

### Example 2:

**Input:** arr = [1, 2, 3, 4, 1], indices = [0, 3]

**Output:** [3, 0]

**Explanation:**

- **For index 0 → arr[0] = 1** , greater elements to the right are [2, 3, 4] → **count = 3.**
- **For index 3 → arr[3] = 4** , no elements greater than 4 exist to the right → **count = 0.**

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ n ≤ 10^4
- 1 ≤ arr[i] ≤ 10^5
- 1 ≤ queries ≤ 100
- 0 ≤ indices[i] ≤ n - 1

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
