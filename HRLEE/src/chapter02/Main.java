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
		

			
		Food food = new Cake();
		Toy toy = new Fan();

		System.out.println();
		
		System.out.println("Height = " + alice.height);
		
		alice.eat(food);
		
		System.out.println();
		
		System.out.println("Height = " + alice.height);
		
		alice.play(toy);
		
		System.out.println();
		
		System.out.println("Height = " + alice.height);
		
		
	}
	
}