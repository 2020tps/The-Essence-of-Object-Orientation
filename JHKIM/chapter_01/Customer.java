package chapter_01;

public class Customer {
	
	private String menu;
	private Bell bell;
	
	public Customer (String menu) {
		this.menu = menu;
	}
	
	public String orderMenu () throws InterruptedException {
		//casher thread 시작.
		
		System.out.println(this.menu + " 주세요.");
		
		Casher casher = new Casher(this.menu);
		bell = casher.handOverBell();
		
		Thread casherProcess = new Thread(casher);
		casherProcess.start();
		casherProcess.join();
		
		if(bell.getState() == true) {
			return casher.getResult();
		}else {
			return "재료가 없엉";
		}
		
	}

}
