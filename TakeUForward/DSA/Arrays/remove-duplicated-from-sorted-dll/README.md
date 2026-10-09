# [938. Remove duplicates from sorted DLL](https://takeuforward.org/practice/dsa/remove-duplicated-from-sorted-dll)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the **head** of a doubly linked list with its values **sorted** in **non-decreasing** order. Remove all **duplicate** occurrences of any value in the list so that **only distinct** values are present in the list.

Return the head of the modified linked list.

### Example 1:

**Input:** head -> 1 <-> 1 <-> 3 <-> 3 <-> 4 <-> 5

**Output:** head -> 1 <-> 3 <-> 4 <-> 5

**Explanation:** head -> 1 <-> <u>1</u> <-> 3 <-> <u>3</u> <-> 4 <-> 5

The underlined nodes were deleted to get the desired result.

### Example 2:

**Input:** head -> 1 <-> 1 <-> 1 <-> 1 <-> 1 <-> 2

**Output:** head -> 1 <-> 2

**Explanation:** head -> 1 <-> <u>1</u> <-> <u>1</u> <-> <u>1</u> <-> <u>1</u> <-> 2

The underlined nodes were deleted to get the desired result.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= number of nodes in the linked list <= 10^5
- -10^4 <= ListNode.val <= 10^4
- Values of nodes are sorted in non-decreasing order.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
