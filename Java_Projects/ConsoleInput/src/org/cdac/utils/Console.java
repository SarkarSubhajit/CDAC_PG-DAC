package org.cdac.utils;

public class Console {
	
	public static String getString() {
		while (true) {
			try {
				byte[] arrInput = new byte[100];
				int length = System.in.read(arrInput);
				if (length <= 0)
					continue;

				String objString = new String(arrInput, 0, length).trim();
				
				if (objString.isEmpty()) {
					System.out.println("Input can't be empty");
					continue;
				}

				return objString;
			} catch (Exception e) {
				System.out.println("INPUT ERROR : " + e.getMessage());
			} 
		}
	}
	
	public static int getInt() {
		while (true) {
			try {
				return Integer.parseInt(getString());
			} catch (NumberFormatException e) {
				System.out.println("Invalid Number (Please enter valid integer) : ");
			}
		}
	}
	
	public static float getFloat() {
		while (true) {
			try {
				return Float.parseFloat(getString());
			} catch (NumberFormatException e) {
				System.out.println("Invalid Number (Please enter valid decimal) : ");
			} 
		}
		
	}
	
	public static boolean getBoolean() {
		while (true) {
			try {
				return Boolean.parseBoolean(getString());
			} catch (NumberFormatException e) {
				// TODO Auto-generated catch block
				System.out.println("Invalid Boolean Input (true / false)");
			} 
		}

	}
	
	public static char getChar() {
		while (true) {
			String str = getString();
			if (str.length() == 1)
				return str.charAt(0);
			System.out.println("Enter only one character");
		}
		
	}
	
}
