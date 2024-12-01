(in-package :cl-user)

(defparameter *filename* "my_input_file.txt")

(defun print-lines (lines)
  "Print out each of the line in LINES to the terminal."
  (dolist (line lines)
    ;; ~a prints the first variable, line, to the terminal.
    ;; ~% prints a newline to the terminal.
    (format t "~a~%" line)))

(defun main ()
  "Solve the AOC problem using the input file in the *FILENAME* variable."
  ;; Read the lines in from the file and trim spaces off both ends.
  (let ((lines (mapcar (lambda (line)
                         (string-trim " " line))
                   (uiop:read-file-lines *filename*))))
    (print-lines lines)))