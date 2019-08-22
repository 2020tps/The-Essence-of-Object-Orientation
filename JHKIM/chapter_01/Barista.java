package chapter_01;

public class Barista extends Thread{
	
	private String menu;
	
	public Barista (String menu) {
		this.menu = menu;
	}
	
	@Override
	public void run() {
		
		System.out.println(menu + " 주문 받았습니다.");
		
		for(int i=0; i<10; i++) {
			System.out.println("제조중......");
			try {
				sleep(500);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		super.run();
	}
	
	public String getResult () {
		return "제조 완료";
	}
	

}
