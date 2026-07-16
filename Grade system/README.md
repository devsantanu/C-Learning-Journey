# Student Result Management System

A simple command-line application written in C that manages student exam results — calculating totals, averages, percentages, grades, and pass/fail status for 5 subjects.

## Features

- Accepts student name and marks for 5 subjects
- Validates marks (must be between 0 and 100)
- Calculates total marks, average, and percentage
- Identifies the highest and lowest marks scored
- Assigns a subject-wise Pass/Fail status (fail if marks < 33)
- Assigns an overall grade (A, B, C, D, or F) based on percentage
- Displays a final report card with overall Pass/Fail result

## Grading Criteria

| Percentage      | Grade |
|-----------------|-------|
| 90% and above   | A     |
| 75% - 89.99%    | B     |
| 60% - 74.99%    | C     |
| 40% - 59.99%    | D     |
| Below 40%       | F     |

> Note: If a student fails in any single subject (marks < 33), the overall grade and result are automatically set to **F / FAIL**, regardless of percentage.

## How to Compile and Run

```bash
# Compile
gcc student_result.c -o student_result

# Run
./student_result
```

## Sample Output

```
===========================================
IMPORTANT NOTICE:
Do not use spaces in the student name.
============================================
Enter Student Name: Santanu

Enter marks of 5 subjects:
subject 1: 85
Subject 1 :Pass

subject 2: 90
Subject 2 :Pass

subject 3: 78
Subject 3 :Pass

subject 4: 88
Subject 4 :Pass

subject 5: 92
Subject 5 :Pass


=====================================
       STUDENT REPORT CARD
=====================================
Student Name   : Santanu
Total Marks    : 433 / 500
Average Marks  : 86.60
Percentage     : 86.60%
Highest Mark   : 92
Lowest Mark    : 78
-------------------------------------
Grade          : B
Overall Result : PASS
=====================================
```

## Input Constraints

- Student name must **not** contain spaces (since `scanf("%s", ...)` reads a single token).
- Marks must be integers between **0 and 100**. Entering an invalid mark ends the program immediately.

## Known Limitations

- Only supports a fixed number of 5 subjects.
- Student name cannot contain spaces due to the use of `scanf("%s", ...)`.
- No input loop/retry on invalid marks — the program exits immediately instead of prompting again.

## Possible Future Improvements

- Allow multi-word student names (e.g., using `fgets`)
- Support a configurable number of subjects
- Re-prompt on invalid input instead of exiting
- Add file storage to save multiple student records
- Export report card to a text or PDF file

## Author

**Santanu Kumar Sahoo**

## License

This project is open source and available for personal or educational use.