package chapter01;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Morning morning = new Morning();
		morning.openCafe();
	}
}

class Morning extends Cafe {
	Scanner sc = new Scanner(System.in);
	
	void openCafe() {
		
		Guide guide = new Guide();
		Baristar baristar = new Baristar();
		makeMenuList();
		
		System.out.println("Would you like to enter the cafe ?");
		System.out.println("1. go   2. go work");
		
		if(sc.nextInt() != 1) return;
		
		Customer customer = new Customer();
		customerList.add(customer);
		
		
		while(!customerList.isEmpty()) {
			showMenu();
			
			System.out.println();
			System.out.println(" Please select a menu ");
			System.out.println();
			
			int menuItem = sc.nextInt();
			if(menuItem > menuList.size() || menuItem < 1) continue;
			
			customer.select(menuItem);
			customer.order();
			
			while(!orderList.isEmpty()) {
				guide.getOrder();
				baristar.getOrder();
			}
			
//			while(!bell.isEmpty()) {
//				customer.getAlram(bells.poll());
//			}
			
			while(!finishList.isEmpty()) {
				System.out.println();
				System.out.println("Completion");
				System.out.println();
				
				customer.getMenu(finishList.poll());
			}
		}
	}

	private void showMenu() {
		System.out.println("*****************************");
		for(int i=0; i<menuList.size(); i++) {
			System.out.println(menuList.get(i));
		}
		System.out.println("*****************************");
	}
}
