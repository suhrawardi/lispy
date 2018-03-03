# Build your own Lisp

It's my take on Daniel Holden's Lisp implementation,
http://www.buildyourownlisp.com/

You need to compile and run the executable like this on Mac OSX:

    $ ./compile.sh parsing && ./parsing
    Lispy version 0.0.1
    Press Ctrl+c to Exit
    lispy> eval { head ( list 1 2 3 4 ) }
    {1}
    lispy> tail { tail tail tail }
    {tail tail}
    lispy> eval ( tail { tail tail { 5 6 7 }} )
    {6 7}
    lispy> eval (head {(+  1 2) (+ 10 20)})
    3
    lispy>
