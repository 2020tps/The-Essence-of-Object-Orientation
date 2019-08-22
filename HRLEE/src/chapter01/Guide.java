package chapter01;

import java.util.Queue;

public class Guide extends Cafe {
	int count = 0;
	
	void getOrder() {
		System.out.println();
		System.out.println(" Please Wait a minute ");
		System.out.println();
	}

	public Queue<Integer> sendBaristgar() {
		return orderList;
	}

	public void getCoffee(int menu) {
		clickAlarm();
	}

	public void clickAlarm() {
		finishList.poll();
	}

	public void sendAlarm() {
		count++;
		bells.add(new Bell(count, orderList.peek()));
	}
}
