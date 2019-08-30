package chapter02;

public class Alice {
	int height = 150;
	
	public Background background;
	
	public Alice() {
		System.out.println("1. go 2. no");
//		switch (background) {
//		case GRASSLAND :
//			break;
//		case CAVE :
//			break;
//		default :
//			break;
//		}
	}
	
	void eat(Food f) {
		if(f.eat())  {
			height += 10;	
		}
		height += 0;
	}
	
	void play(Toy t) {
		t.play();
		height -=10;
	}
	
}
