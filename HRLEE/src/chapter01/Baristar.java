package chapter01;

public class Baristar extends Cafe {
	int menuNumber;
	
	void getOrder() {
		menuNumber = orderList.poll();
		make();
	}
	
	void make() {
		System.out.println();
		System.out.println("Making....");
		System.out.println();
		finishList.add(menuNumber);
	}
	
	void recipe() {
		
	}
	
	int sendGuide() {
		return menuNumber;
	}

}
