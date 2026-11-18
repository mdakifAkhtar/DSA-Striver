# [243. Valid Parenthesis Checker](https://takeuforward.org/practice/dsa/valid-paranthesis-checker)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Find the validity of an input string **s** that only contains the letters '(', ')' and '*'.

A string entered is legitimate if

- Any left parenthesis '(' must have a corresponding right parenthesis ')'.
- Any right parenthesis ')' must have a corresponding left parenthesis '('.
- Left parenthesis '(' must go before the corresponding right parenthesis ')'.
- '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".

### Example 1:

**Input:** s = (*))

**Output:** true

**Explanation:** The * can be replaced by an opening '(' bracket. The string after replacing the * mark is "(())" and is a valid string.

### Example 2:

**Input:** s = *(()

**Output:** false

**Explanation:** The * replaced with any bracket does not form a valid string.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= s.length <= 10^4
- s consist of only '(', ')', '*'.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
