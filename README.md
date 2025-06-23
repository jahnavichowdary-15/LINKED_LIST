
# LINKED_LIST

COMAPNY: CODTECH IT SOLUTIONS

NAME: NANDYALA NANDITHA

INTERN ID: CT04DN872

DOMAIN: C Programming

DURATION: 4 WEEKS

MENTOR: NEELA SANTHOSH KUMAR

###OVERVIEW OF THE PROJECT

Project Title: Singly Linked List Implementation in C

Overview:

This project focuses on implementing a singly linked list using the C programming language, which is a core concept in data structures. The implementation demonstrates dynamic memory allocation and pointer manipulation — key components of systems-level programming. It is designed to perform basic operations on a linked list, such as insertion, deletion, and traversal, with clean, modular, and efficient code. The program serves as a foundational learning tool for understanding how data is organized and manipulated in non-contiguous memory, unlike arrays.

This project is suitable for undergraduate-level internships, system-level programming practice, or coursework in data structures and algorithms. It provides a hands-on opportunity to learn the internal workings of linked data structures, paving the way for more complex structures like doubly linked lists, circular lists, stacks, and queues.

Core Concepts Demonstrated:

Dynamic Memory Allocation: Nodes are created at runtime using malloc, showcasing how memory is allocated and managed dynamically in C.

Pointers and Structures: The use of struct to define the node and pointers to navigate and manipulate the list reinforces essential C programming techniques.

Modular Programming: The code is divided into clear, logical functions—createNode(), insertEnd(), deleteNode(), and traverse()—which enhances readability, maintainability, and reusability.

Algorithmic Thinking: Each operation reflects the algorithmic process of traversing or updating a linked list, which is crucial for mastering more advanced algorithms.

Functional Details:

1. Node Creation (createNode):
This function takes an integer as input and returns a pointer to a newly created node. If memory allocation fails, it gracefully exits with an error message. This ensures the robustness of the program.

2. Insertion at the End (insertEnd):
This function inserts a new node at the end of the list. It handles both the case where the list is initially empty and the general case where traversal to the end is required.

3. Deletion by Value (deleteNode):
This function removes a node with a given value from the list. It manages three cases:

The head node matches the key.
The key is found elsewhere in the list.
The key is not present (user is notified).
4. Traversal (traverse):
This function prints all elements in the list from the head to the last node, ending with NULL to indicate the end of the list.

Sample Execution Flow:

Insert 10 → List: 10
Insert 20 → List: 10 -> 20
Insert 30 → List: 10 -> 20 -> 30
Delete 20 → List becomes: 10 -> 30
Insert 40 → Final List: 10 -> 30 -> 40
Each step is validated using the traverse() function, which prints the current state of the linked list.

Conclusion:

This project is a complete, functional demonstration of how a singly linked list operates. It combines theoretical knowledge with practical coding skills, making it an ideal mini-project for internships, academic submissions, or personal learning. By implementing and testing core list operations, this project strengthens the student’s understanding of fundamental data structures and equips them with the confidence to tackle more advanced programming challenges.

OUTPUT :

![WhatsApp Image 2025-06-23 at 19 23 00_d0dde4cb](https://github.com/user-attachments/assets/a8838f4a-739e-4ffa-ab71-af742f48aae3)
