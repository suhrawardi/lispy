# Build your own Lisp

It's my take on Daniel Holden's Lisp implementation,
http://www.buildyourownlisp.com/

You need to compile and run the executable like this on Mac OSX:

		$ ./compile.sh parsing && ./parsing
		Lispy version 0.0.1
		Press Ctrl+c to Exit
		lispy> +
		<function>
		lispy> eval ( head { 1 2 3 4 5} )
		1
		lispy> eval ( head { 5 10} )
		5
		lispy> eval ( head { * - + / } )
		<function>
		lispy> eval ( head { * - + / } ) 10 20
		Error: Function 'eval' passed too many arguments
		lispy> (eval ( head { * - + / } )) 10 20
		200
		lispy> hello
		Error: unbound symbol!
