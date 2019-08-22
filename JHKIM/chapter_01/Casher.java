package chapter_01;

public class Casher extends Thread {
	
	private String menu;
	private Bell bell;
	
	public Casher (String menu) {
		this.menu = menu;
	}
	
	@Override
	public void run() {
		
		System.out.println(this.menu + " 를 주문 받았습니다.");
		
		Barista barista = new Barista(this.menu);
		Thread baristaThread = new Thread(barista);
		
		baristaThread.start();
		try {
			baristaThread.join();
			barista.getResult();
			
			bell.changeState();
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
	
	public Bell handOverBell () {
		bell = new Bell();
		return bell;
	}
	
	public String getResult () {
		return menu + " 가 나왔습니다.";
	}

}
