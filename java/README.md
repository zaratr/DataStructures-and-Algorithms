# Data Structures and Algorithms

## Language: `Java` using Gradle

### Folder/Project Setup

Each Folder (Package) will have a file with implementation of Code Challenge. Corresponding to the file will be a test file to test that Challenge.

#### Implementation

- Folder and class in the `datastructures` subfolder of the `main` branch of Gradle library source, with the name of the new data structure in the folder and class names, and complete your implementation there.
  - Ex. Linked Lists:
    - `lib\src\main\java\datastructures\linkedlist\LinkedList.java`

#### Tests

- Folder and class in the `datastructures` subfolder of the `test` branch of Gradle library source, with the name of the new data structure in the folder and class names, and complete your test implementation there.
  - Ex. Linked Lists:
    - `lib\src\test\java\datastructures\linkedlist\LinkedListTest.java`


Utilize Gradle to test `Tests` on `Implementation`. to do this one can simply run `./gradlew test fileTest.java` or utilize the IDE such as Intellij.

#### Whiteboard Diagram & README

- Included a README that describes the data structure operation.
- Included sections for each method describing inputs and outputs.
  - Included images where appropriate.

### Data Structure: Extending an implementation

Some code challenges are not so much "interview style" algorithms, but rather tasks to "extend" your base class. In these cases, you should simply be adding methods to your class along with the appropriate tests.

#### Implement a New Method

- Work within the class you created for the data structure in the `datastructures` folder.
  - Ex. Linked Lists:
    - `lib\src\main\java\datastructures\linkedlist\LinkedList.java`
- Create a new method within the class that solves the code challenge.

#### Testing Implementations

- Add to the tests written for this data structure in the `datastructures` folder.
  - Ex. Linked Lists:
    - `lib\src\test\java\datastructures\linkedlist\LinkedListTest.java`


#### Live Tests

Create a github action to automatically run all of your tests as you check in your code. These results should match your own, and will be readily found on the  **Actions** tab.

