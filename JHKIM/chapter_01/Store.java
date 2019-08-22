package chapter_01;

public class Store {
	
	public static void main(String args[]) {
		
		Customer customer = new Customer("Americano");
		String result = "없엉.";
		try {
			result = customer.orderMenu();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			System.out.println("안됨...");
		}
		
		System.out.println(result);
		
	}

}
