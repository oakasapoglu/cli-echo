;;;; start

(import (chicken process-context))

;; Join a list of strings with spaces
(define (join-with-space lst)
  (if (null? lst)
      ""
      (let loop ((rest (cdr lst))
                 (result (car lst)))
        (if (null? rest)
            result
            (loop (cdr rest)
                  (string-append result " " (car rest)))))))

;; Replace escape sequences like \n, \t, and \\ in a string
(define (interpret-escapes s)
  (let ((len (string-length s)))
    (let loop ((i 0)
               (result ""))
      (if (>= i len)
          result
          (let ((ch (string-ref s i)))
            (if (and (< (+ i 1) len) (char=? ch #\\))
                ;; Found a backslash
                (let ((next (string-ref s (+ i 1))))
                  (cond
                    ((char=? next #\\) (loop (+ i 2) (string-append result "\\")))
                    ((char=? next #\n) (loop (+ i 2) (string-append result "\n")))
                    ((char=? next #\t) (loop (+ i 2) (string-append result "\t")))
                    (else (loop (+ i 2) (string-append result (string #\\ next))))))
                ;; Regular character, just append
                (loop (+ i 1) (string-append result (string ch)))))))))

;; Main
(define args (command-line-arguments))

(let ((joined (join-with-space args)))
  (display (interpret-escapes joined))
  (newline))

;;;; end
