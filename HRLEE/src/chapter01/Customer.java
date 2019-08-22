package chapter01;

public class Customer extends Cafe {
	int menu = 1;
	
	public void select(int menu){
		this.menu = menu;
	}
	
	void checkmenu() {
	}
	
	public void order() {
		orderList.add(menu);
	}
	
	void getAlram(Bell alram) {
		this.menu = alram.menu;
	}
	
	void getMenu(int Menu) { 
		if(Menu == menu) {
			customerList.poll();
			System.out.println("byebye");
		} else {
			System.out.println("NOOOOOOOOOOOOOOOOOOOOO");
		}
	}
}
