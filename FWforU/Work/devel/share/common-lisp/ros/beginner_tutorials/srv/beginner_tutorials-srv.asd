
(cl:in-package :asdf)

(defsystem "beginner_tutorials-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "AddTwoInts2" :depends-on ("_package_AddTwoInts2"))
    (:file "_package_AddTwoInts2" :depends-on ("_package"))
  ))