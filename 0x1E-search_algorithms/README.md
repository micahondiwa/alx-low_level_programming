# Sear Algorithms
- A project done during my Full Stack Software Engineering studies at [ALX Africa](https://www.alxafrica.com/software-engineering-2022/), a course offered by [Holberton School](https://www.holbertonschool.com/).

## Technologies
- Files written in ```vi```, ```vim```, and ```emacs``` editors. 
- C files compiled using ```gcc 9.4.0```.
- C files wriiten according to the betty coding style. Checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
- Files tested on ```Ubuntu 20.04``` LTS using ```gcc```

## Files

|File | Question/Description |
| ---  | --- |
|[0-linear.c](0-linear.c)|Write a function that searches for a value in an array of integers using the Linear search algorithm.|
|[1-binary.c](1-binary.c)|Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.|
|[2-O](2-O)|What is the time complexity (worst case) of a linear search in an array of size n?|
|[3-O](3-O)|What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?.|
|[4-O](4-O)|What is the time complexity (worst case) of a binary search in an array of size n?|
|[5-O](5-O)|What is the space complexity (worst case) of a binary search in an array of size n?|
|[6-O](6-O)|What is the space complexity of this function / algorithm?|
|[100-jump.c](100-jump.c)|Write a function that searches for a value in a sorted array of integers using the Jump search algorithm.|
|[101-O](101-O)|What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?|
|[102-interpolation.c](102-interpolation.c)|Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm.|
|[103-exponential.c](103-exponential.c)|Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm.|
|[104-advanced_binary.c](104-advanced_binary.c)|You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem. Write a function that searches for a value in a sorted array of integers.|
|[105-jump_list.c](105-jump_list.c)|You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.|
As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a skip list. This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as sizeof(skiplist_t) > sizeof(listint_t) (see example below).
