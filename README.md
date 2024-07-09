
# Hospital Management System

## Overview

The Hospital Management System is designed to streamline hospital operations by managing patient data using Data Structures and Algorithms (DSA) concepts. This project is developed using C++ and incorporates Stack, Queue, and Priority Queue to handle different patient management scenarios.

## Features

- **Patient Registration**: Register new patients with their details.
- **Patient Records**: Maintain and retrieve patient records.
- **LIFO Data Handling (Stack)**: Provide patient data based on Last In, First Out (LIFO) principle.
- **FIFO Data Handling (Queue)**: Provide patient data based on First In, First Out (FIFO) principle.
- **Priority Handling (Priority Queue)**: Manage and prioritize emergency or elderly patient data.

## Technologies Used

- **C++**: The primary programming language used for development.
- **Data Structures**: Implementation of Stack, Queue, and Priority Queue for efficient data management.

## DSA Concepts

- **Stack**: Used to handle data on a Last In, First Out (LIFO) basis.
- **Queue**: Used to handle data on a First In, First Out (FIFO) basis.
- **Priority Queue**: Used to prioritize data based on emergency cases or the age of patients.

## Getting Started

### Prerequisites

- C++ Compiler
- Development Environment (such as Visual Studio, Code::Blocks, or any other C++ IDE)

### Installation

1. **Clone the repository**:
    ```bash
    git clone https://github.com/your-username/hospital-management-system.git
    cd hospital-management-system
    ```

2. **Compile the code**:
    ```bash
    g++ -o hospital_management main.cpp stack.cpp queue.cpp priority_queue.cpp
    ```

3. **Run the application**:
    ```bash
    ./hospital_management
    ```

## Usage

1. **Register New Patient**: Add a new patient’s details to the system.
2. **Retrieve Patient Data (LIFO)**: Use the Stack implementation to retrieve the most recently added patient data.
3. **Retrieve Patient Data (FIFO)**: Use the Queue implementation to retrieve the oldest patient data.
4. **Prioritize Patient Data**: Use the Priority Queue implementation to manage and retrieve data for emergency or elderly patients.

## Code Structure

- **main.cpp**: The main entry point of the application.
- **stack.cpp / stack.h**: Implementation of Stack to handle LIFO data.
- **queue.cpp / queue.h**: Implementation of Queue to handle FIFO data.
- **priority_queue.cpp / priority_queue.h**: Implementation of Priority Queue to handle prioritized data.

## Contributing

We welcome contributions from the community. Please read our [Contributing Guidelines](link-to-contributing-guidelines) before submitting a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions or feedback, please feel free to reach out at [arbabhussain414@gmail.com](arbabhussain414@gmail.com)
