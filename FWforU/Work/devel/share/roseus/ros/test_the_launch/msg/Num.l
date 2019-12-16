;; Auto-generated. Do not edit!


(when (boundp 'test_the_launch::Num)
  (if (not (find-package "TEST_THE_LAUNCH"))
    (make-package "TEST_THE_LAUNCH"))
  (shadow 'Num (find-package "TEST_THE_LAUNCH")))
(unless (find-package "TEST_THE_LAUNCH::NUM")
  (make-package "TEST_THE_LAUNCH::NUM"))

(in-package "ROS")
;;//! \htmlinclude Num.msg.html


(defclass test_the_launch::Num
  :super ros::object
  :slots (_mun ))

(defmethod test_the_launch::Num
  (:init
   (&key
    ((:mun __mun) 0)
    )
   (send-super :init)
   (setq _mun (round __mun))
   self)
  (:mun
   (&optional __mun)
   (if __mun (setq _mun __mun)) _mun)
  (:serialization-length
   ()
   (+
    ;; int64 _mun
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _mun
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _mun (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _mun) (= (length (_mun . bv)) 2)) ;; bignum
              (write-long (ash (elt (_mun . bv) 0) 0) s)
              (write-long (ash (elt (_mun . bv) 1) -1) s))
             ((and (class _mun) (= (length (_mun . bv)) 1)) ;; big1
              (write-long (elt (_mun . bv) 0) s)
              (write-long (if (>= _mun 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _mun s)(write-long (if (>= _mun 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _mun
#+(or :alpha :irix6 :x86_64)
      (setf _mun (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _mun (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(setf (get test_the_launch::Num :md5sum-) "24a51b5281936e58f18138cdb36963e4")
(setf (get test_the_launch::Num :datatype-) "test_the_launch/Num")
(setf (get test_the_launch::Num :definition-)
      "int64 mun
")



(provide :test_the_launch/Num "24a51b5281936e58f18138cdb36963e4")


