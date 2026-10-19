# [331. Sum of Subarray Minimums](https://takeuforward.org/practice/dsa/sum-of-subarray-minimums)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given an array of integers arr of size n, calculate the sum of the minimum value in each (contiguous) **subarray** of arr. Since the result may be large, return the answer modulo 10^9 +7.

### Example 1:

Input: arr = [3, 1, 2, 5]

Output: 18

Explanation: The minimum of subarrays: [3], [1], [2], [5], [3, 1], [1, 2], [2, 5], [3, 1, 2], [1, 2, 5], [3, 1, 2, 5] are 3, 1, 2, 5, 1, 1, 2, 1, 1, 1 respectively and their sum is 18.

### Example 2:

Input: arr = [2, 3, 1]

Output: 10

Explanation: The minimum of subarrays: [2], [3], [1], [2,3], [3,1], [2,3,1] are&nbsp;2, 3, 1, 2, 1, 1 respectively and their sum is 10.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- &nbsp;&nbsp;1 <= arr.length <= 10^5
- &nbsp;&nbsp;1 <= arr[i] <= 10^6

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
