package chapter_01;

public class Bell {
	
	private boolean state;
	
	public Bell () {
		this.state = false;
	}
	
	public void changeState () {
		this.state = true;
	}
	
	public boolean getState () {
		return this.state;
	}

}
