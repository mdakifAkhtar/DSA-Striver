# [300. Next Greater Element - 2](https://takeuforward.org/practice/dsa/next-greater-element---2)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given a **circular** integer array arr, return the **next greater element** for every element in arr.

The next greater element for an element x is the first element greater than x that we come across while traversing the array in a **clockwise** manner.

If it doesn't exist, return -1 for that element.

### Example 1:

**Input:** arr = [3, 10, 4, 2, 1, 2, 6, 1, 7, 2, 9]

**Output:** [10, -1, 6, 6, 2, 6, 7, 7, 9, 9, 10]

**Explanation:**

For the first element in arr i.e, 3, the greater element which comes next to it while traversing and is closest to it is 10. Hence,10 is present on index 0 in the resultant array. Now for the second element i.e, 10, there is no greater number and hence -1 is it’s next greater element (NGE). Similarly, we got the NGEs for all other elements present in arr.&nbsp;&nbsp;

### Example 2:

**Input:** &nbsp;arr = [5, 7, 1, 7, 6, 0]

**Output:** [7, -1, 7, -1, 7, 5]

**Explanation:**

For the first element in arr i.e, 5, the greater element which comes next to it while traversing and is closest to it is 7. Now for the second element i.e, 7, there is no greater number and hence -1 is it’s next greater element (NGE). Similarly, we got the NGEs for all other elements present in arr.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- &nbsp;&nbsp;1 ≤ n≤ 10^5
- &nbsp;&nbsp;0 ≤ arr[i] ≤ 10^9

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
