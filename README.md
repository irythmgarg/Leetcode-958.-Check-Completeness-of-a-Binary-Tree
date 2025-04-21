# Leetcode-958.-Check-Completeness-of-a-Binary-Tree
Check if a Binary Tree is Complete
This repository provides two different C++ solutions for checking whether a given binary tree is a complete binary tree. Both use different strategies—one based on level-order traversal and the other based on node indexing.

✅ What is a Complete Binary Tree?
A complete binary tree is a binary tree in which:

All levels are fully filled except possibly the last.

All nodes in the last level are as far left as possible.

📌 Problem Statement
Given the root of a binary tree, determine whether it is a complete binary tree.

🚀 Approaches
🔹 Approach 1: Level-Order Traversal (BFS)
Traverse the tree using a queue (level-order).

Once a NULL node is encountered, no other non-null node should follow.

If such a node exists after a NULL, the tree is not complete.

Key Code Highlights:
Uses a queue to simulate level-order.

Maintains a boolean flag past to track null encounter.

Time & Space Complexity:
Time: O(N)

Space: O(N)

🔹 Approach 2: Index-Based Recursive Check
First, count the total number of nodes.

Then use DFS to check if each node’s index (in a complete tree array representation) does not exceed the node count.

If any node has an index beyond the total count, the tree is not complete.

Key Code Highlights:
Assigns indices like in an array representation of a complete binary tree.

Verifies index bounds for each node recursively.

Time & Space Complexity:
Time: O(N)

Space: O(H), where H is the height of the tree due to recursion stack.

💡 Example
cpp
Input: [1, 2, 3, 4, 5, 6]
Output: true

Input: [1, 2, 3, 4, 5, null, 7]
Output: false


🧠 Applications
Validating binary heaps

Ensuring structural integrity in tree-based storage systems

Use cases in balanced tree algorithms

