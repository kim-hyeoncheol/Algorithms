
Main:	Main.class
	java Main < input.txt

Main.class:	Main.java
	javac Main.java

clean:
	rm Main.class
