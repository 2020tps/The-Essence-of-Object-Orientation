package chapter02;

public class Cake implements Food{
	int amount = 100;
	static final int ONE_MOUSE = 20;
	
	@Override
	public boolean eat() {
		if(chkAmount()) {
			amount -= ONE_MOUSE;
			return true;
		}
		return false;
	}

	private boolean chkAmount() {
		return amount > 0 ? true : false;
	}

}
