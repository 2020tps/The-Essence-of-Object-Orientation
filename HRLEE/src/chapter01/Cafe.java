package chapter01;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public abstract class Cafe {
	static Queue<Customer> customerList = new LinkedList<Customer>();
	static Queue<Integer> orderList = new LinkedList<Integer>();
	static Queue<Integer> finishList = new LinkedList<Integer>(); 
	static List<String> menuList = new ArrayList<String>();
	static Queue<Bell> bells = new LinkedList<Bell>();
	int[][] result = new int[50][50];
	
	public void makeMenuList() {
		menuList.add("*      1. Espresso          *");
		menuList.add("*      2. Americano         *"); 
		menuList.add("*      3. Cafe Latte        *");
		menuList.add("*      4. Cafe Mocca        *");
		menuList.add("*      5. Cappuccino        *");
	}

}

