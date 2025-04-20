# Leetcode-958.-Check-Completeness-of-a-Binary-Tree
Check if a Binary Tree is Complete
This repository provides a C++ implementation to verify whether a given binary tree is a complete binary tree. A binary tree is complete if all levels are fully filled except possibly the last, and all nodes in the last level are as far left as possible.

🧠 Problem Statement
Given the root of a binary tree, determine if it is a complete binary tree.

A complete binary tree has the following properties:

Every level except possibly the last is completely filled.

All nodes in the last level are aligned to the left.

🧩 Key Concepts
Level-Order Traversal (BFS): Used to examine the tree level by level.

Queue Data Structure: Helps maintain node processing order.

NULL Tracking: If a NULL is found in level-order traversal, all subsequent nodes must also be NULL.

🚀 Approach
Traverse the tree in level-order using a queue.

After encountering a NULL node, ensure that no non-null nodes appear after it.

If any non-null node appears after a NULL, return false as the tree is not complete.

If traversal completes without violations, return true.

📂 Code Structure
isCompleteTree():

Uses a queue to perform level-order traversal.

Tracks the presence of null nodes using a boolean flag past.

⏱️ Time and Space Complexity
Time Complexity: O(N), where N is the number of nodes in the tree.

Space Complexity: O(N), due to the use of the queue.

🧪 Example
cpp
Input: root = [1, 2, 3, 4, 5, 6]
Output: true
Input: root = [1, 2, 3, 4, 5, null, 7]
Output: false

📦 Applications
Heap (binary heap must be a complete binary tree)

Tree balancing algorithms

Structural validation of data storage trees (e.g., databases, filesystems)
