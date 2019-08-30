package chapter02;

public class Alice {
	int height = 150;
	
	public Background background;
	private Fan fan = new Fan();
	private Cake cake = new Cake();
	
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
	
	void eat() {
		if(cake.eat())  {
			height += 10;	
		}
		height += 0;
	}
	
	void play() {
		fan.play();
		height -=10;
	}
	
}
