package org.cdac.utils;

import java.io.IOException;

public class Entry {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		try {
			LinkedList<String> list = new LinkedList<>();				
			
			list.add("Hello");
			list.add("World");
			list.add("Java");
			list.add("AJava");
			
			//String str = list.getFirst();
			
			for (String str : list) {
				if (str.charAt(0) == 'A')
					throw new IOException("Invalid Entry");
				System.out.println(str);
			}
				
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
//		while(str != null) {
//			System.out.println(str);
//			str = list.getNext();
//		}
//		
//		list.sortList((a, b) -> a.compareTo(b));
//		
//		str = list.getFirst();
//		
//		while(str != null) {
//			System.out.println(str);
//			str = list.getNext();
//		}
//		
	}

}
