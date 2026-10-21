# [57. Sliding Window Maximum](https://takeuforward.org/practice/dsa/sliding-window-maximum)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given an array of integers arr, there is a sliding window of size **k** which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. Return the **max** sliding window.

### Example 1:

Input: arr = [4, 0, -1, 3, 5, 3, 6, 8], k = 3

Output: [4, 3, 5, 5, 6, 8]

Explanation:&nbsp;

<img src="https://static.takeuforward.org/content/1789481812_MbelfJDp.webp">

For each window of size k=3, we find the maximum element in the window and add it to our output array.

### Example 2:

Input: arr = [20, 25], k = 2

Output: [25]

Explanation: There’s just one window of size 2 that is possible and the maximum of the two elements is our answer.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= arr.length <= 10^5
- -10^4 <= arr[i] <= 10^4
- 1 <= k <= arr.length

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
