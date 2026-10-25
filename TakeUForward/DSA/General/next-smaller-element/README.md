# [194. Next Smaller Element](https://takeuforward.org/practice/dsa/next-smaller-element)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given an array of integers **arr** , your task is to find the Next Smaller Element **(NSE)** for every element in the array.

The Next Smaller Element for an element x is defined as the first element to the right of x that is smaller than x.

If there is no smaller element to the right, then the NSE is **-1** .

### Example 1:

**Input:** &nbsp;arr = [4, 8, 5, 2, 25]

**Output:** [2, 5, 2, -1, -1]

Explanation:

- For 4, the next smaller element is 2.

- For 8, the next smaller element is 5.

- For 5, the next smaller element is 2.

- For 2, there is no smaller element to its right → -1.

- For 25, no smaller element exists → -1.

### Example 2:

**Input:** &nbsp;arr = [10, 9, 8, 7]

**Output:** [9, 8, 7, -1]

**Explanation:**

- Each element’s next right neighbor is smaller.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= arr.length <= 10^5
- -10^9 <= arr[i] <= 10^9

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
