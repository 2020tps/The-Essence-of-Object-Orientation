package chapter02;

public class Main {
	public static void main(String[] args) {
		CAVE c = new CAVE();
		c.start();
	}
}

class CAVE {
	public void start() {
		Alice alice = new Alice();
		
		System.out.println();
		
		System.out.println("Height = " + alice.height);
		
		alice.eat();
		
		System.out.println();
		
		System.out.println("Height = " + alice.height);
		
		alice.play();
		
		System.out.println();
		
		System.out.println("Height = " + alice.height);
		
		
	}
	
}