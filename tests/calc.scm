(define (calc-program)
  (write-string "A = ")
  (define num-a (read))
  
  (write-string "B = ")
  (define num-b (read))
  
  
  (write-string "OPERATION: ")
  (define op (string->char (read)))
  
  (write-string 
    (concat (number->string num-a) " " op " " (number->string num-b) " = " 
      (number->string (cond
        ((eq? op #\+) (+ num-a num-b))
        ((eq? op #\-) (- num-a num-b))
        ((eq? op #\*) (* num-a num-b))
        ((eq? op #\/) (/ num-a num-b))
        ((eq? op #\%) (% num-a num-b))
        (else 0)))))
  
  (write-char #\newline)
  
  (calc-program))
(calc-program)