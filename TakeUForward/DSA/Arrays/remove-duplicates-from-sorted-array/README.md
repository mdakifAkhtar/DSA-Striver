# [196. Remove duplicates from sorted array](https://takeuforward.org/practice/dsa/remove-duplicates-from-sorted-array)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given an integer array **nums** sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.

Return the number of unique elements in the array.

If the number of unique elements be **k,** then,

- Change the array nums **** such that the first **k** elements of nums contain the **unique** values in the order that they were present originally.
- The remaining elements, as well as the size of the array does not matter in terms of correctness.
- **The driver code will assess correctness by printing and checking only the first k elements of the modified array.**

An array sorted in **non-decreasing** order is an array where every element to the right of an element is either equal to or greater **** in value than that element.

### Example 1:

**Input:** nums = [0, 0, 3, 3, 5, 6]

**Output:** 4

**Explanation:**

Resulting array = [0, 3, 5, 6, _, _]

There are 4 distinct elements in nums and the elements marked as _ can have any value.

### Example 2:

**Input:** nums = [-2, 2, 4, 4, 4, 4, 5, 5]

**Output:** 4

**Explanation:**

Resulting array = [-2, 2, 4, 5, _, _, _, _]

There are 4 distinct elements in nums and the elements marked as _ can have any value.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= nums.length <= 10^5
- -10^4 <= nums[i] <= 10^4
- nums is sorted in non-decreasing order.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
